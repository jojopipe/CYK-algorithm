#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define MAXLINELENGTH 512

typedef struct symbol {
    char letter;
    char options[256];
} symbol_t;
// line read       ----- > options in memory
//S -> a | XY | LW ----- > //a\0XYLW\0\0
//X -> a | b | LW  ----- > //a\0b\0LW\0\0

typedef struct grammar {
    int symbolc;
    symbol_t symbols[64];
} grammar_t;

int line_to_symbols(grammar_t *gm, char const *line, int index) {
    char curr = *line;
    int symbols_written = 0;
    gm->symbols[index].letter = curr;
    for (int i = 1; i < 256; ++i) {
        curr = line[i];
        if (curr < 'A' || (curr > 'Z' && curr < 'a') || curr > 'z') {
            if (curr == 0) break;
            continue;
        }
        gm->symbols[index].options[symbols_written++] = curr;
        curr = line[++i];
        if (curr < 'A' || (curr > 'Z' && curr < 'a') || curr > 'z') {
            if (curr == 0) break;
            gm->symbols[index].options[symbols_written++] = 0;
            continue;
        }
        gm->symbols[index].options[symbols_written++] = curr;
    }
    gm->symbols[index].options[symbols_written+1] = 0;
    gm->symbols[index].options[symbols_written+2] = 0;
    return 0;
}

int read_grammar_from_file(grammar_t *gm, char *file_path) {
    FILE *f = fopen(file_path,"r");
    if (!f) return 1;
    char line_buf[512];
    int lines_read = 0;
    while(fgets(line_buf, MAXLINELENGTH, f)) {
        ++lines_read;
        //printf("%d: %s", lines_read, line_buf);
        (void) line_to_symbols(gm, line_buf, lines_read-1);
    }
    gm->symbolc = lines_read;
    return 0;
}


void print_grammar(grammar_t *gm) {
    printf("# grammar\n");
    printf("```\n");
    for (int i = 0; i < gm->symbolc; ++i) {
        printf("%c -> ", gm->symbols[i].letter);
        char curr;
        char next;
        int first_print = 1;
        for (int j = 0; ; ++j) {
            curr = gm->symbols[i].options[j];
            next = gm->symbols[i].options[j+1];
            if (!curr && !(next)) break; //two zeroes mark the end
            if (curr && !(next)) {
                if (first_print) {
                    printf("%c", curr);
                    first_print = 0;
                }
                else printf(" | %c", curr);
            }
            if(curr && next) {
                ++j;
                if (first_print) {
                    printf("%c%c", curr, next);
                    first_print = 0;
                }
                else printf(" | %c%c", curr, next);
            }
        }
        printf("\n");
    }
    printf("```\n");
}

int symbol_contains(symbol_t const *sy, char const part[2]) {
    for (int i = 0; i < 256; i+=2) {
        if (sy->options[i] == 0 && sy->options[i+1]) return 0;
        if (sy->options[i] == part[0] && sy->options[i+1] == part[1]) return 1;
    }
    return 0;
}

void print_table_internal(char const *table, int length, int symbolc) {
    printf("|");
    for (int i = 0; i < length; ++i) {
        printf("%d|", i+1);
    }
    printf("\n");
    for (int i = 0; i < length; ++i) {
        printf("|-");
    }
    printf("|");
    printf("\n");
    for (int i = 0; i < length; ++i) {
        printf("|");
        for (int j = 0; j < length; ++j) {
            for (int k = 0; k < symbolc; ++k) {
                char curr = table[i * length * length + j * length + k];
                if (curr) {
                    printf("%c", curr);
                }
                else
                    printf(" ");
            }
            printf("|");
        }
        printf("\n");
    }
}

void reset_table(char *table, int length, int symbolc) {
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            for (int s = 0; s < symbolc; ++s) {
                table[(i*length*length)+(j*length)+s] = 0;
            }
        }
    }
}

int cyk_check(grammar_t const *gm, char const *word, int printmode) {
    int length = (int) strlen(word);
    char *table = calloc(length * length * gm->symbolc, sizeof(char));
    if (!table) return -1;
    reset_table(table, length, gm->symbolc);
    printf("# empty table\n");
    print_table_internal(table, length, gm->symbolc);
    int last_cell_reached = 0;
    for (int depth = 0; depth < length; ++depth) {
        if (last_cell_reached) break;
        int col;
        for (int row = 0; row < length - depth; ++row) {
            col = row + depth;
            if (col == length) last_cell_reached = 1;
            if (row == col) { //this means we're in the "first" iteration (on the diagonal)
                //check against singular letter, not concat:
                for (int i = 0; i < gm->symbolc; ++i) {
                    if (symbol_contains(&gm->symbols[i], (char[2]){word[row], 0})) {
                        table[row * length * length + col * length + i] = gm->symbols[i].letter;
                    }
                }
            }
            else {
                //get all cell pairs:
                for (int i = row; i < col; ++i) {
                    char concat[2];
                    //make all possible concats for given cell pair:
                    for (int c1 = 0; c1 < gm->symbolc; ++c1) {
                        for (int c2 = 0; c2 < gm->symbolc; ++c2) {
                            char curr_c1 = table[row * length * length + i * length + c1];
                            char curr_c2 = table[(i+1) * length * length + col * length + c2];
                            if (!curr_c1 || !curr_c2) continue;
                            concat[0] = curr_c1;
                            concat[1] = curr_c2;
                            //check every symbol for concat:
                            for (int s = 0; s < gm->symbolc; ++s) {
                                //print_table_internal(table, length, gm->symbolc);
                                if (symbol_contains(&gm->symbols[s], concat)) {
                                    table[row * length * length + col * length + s] = gm->symbols[s].letter;
                                }
                            }
                        }
                    }
                }
            }
            if (printmode) {
                printf("# table for cell %d,%d\n", row+1, col+1);
                print_table_internal(table, length, gm->symbolc);
            }
        }
    }
    printf("# finished table\n");
    print_table_internal(table, length, gm->symbolc);
    printf("\n");
    int producable = 0;
    if (table[(0*length*length)+(length-1)*length] == 'S') {
        producable = 1;
    }
    free(table);
    return producable;
}

int main(int argc, char **argv) {
    grammar_t gm = {0};
    int printmode = 0;
    if (argv[3])
        printmode = (int) strtol(argv[3], NULL, 10);
    char input_buf[4096];
    char word[4096];
    if (argc < 3) {
        printf("grammar file: ");
        fgets(input_buf, 4096, stdin);
        input_buf[strlen(input_buf)-1] = 0;
        read_grammar_from_file(&gm, input_buf);
        printf("word to check: ");
        fgets(input_buf, 4096, stdin);
        input_buf[strlen(input_buf)-1] = 0;
        memcpy(word, input_buf, strlen(input_buf));
    }
    else {
        read_grammar_from_file(&gm, argv[1]);
        memcpy(word, argv[2], strlen(argv[2]));
    }
    print_grammar(&gm);
    printf("# input word\n%s\n", word);
    int result = cyk_check(&gm, word, printmode);
    printf("# result\n%s\n", result == 1 ? "can be produced" : "cannot be produced");
    return 0;
}
