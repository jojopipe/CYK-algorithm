CC      = gcc
CFLAGS  = -std=c11 -pedantic -D_XOPEN_SOURCE=700 -Wall -g
RM      = rm -f
.PHONY: clean doc test

all: cyk-algorithm

cyk-algorithm: main.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	$(RM) clash *.o
