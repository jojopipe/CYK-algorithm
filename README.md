# CYK-algorithm
executes the Cocke-Younger-Kasami algorithm on a given grammar for a given word\
output is in markdown format, so it can easily be piped into an .md file
# quick start
### print to console
```bash
make
./cyk-algorithm example.gm abcabc
```
### output to markdown file
```bash
make
./cyk-algorithm example.gm abcabc > out.md
```
### print each step
```bash
make
./cyk-algorithm example.gm abcabc 1
```