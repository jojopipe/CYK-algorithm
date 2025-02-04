# grammar
```
S -> a | AT
T -> a | b | VT | SU
A -> a
U -> VV
V -> BA | AT | SS
B -> b | AT | SS
```
# input word
aabbaab
# empty table
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# finished table
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB|ST UVB|
|      |STA   |S   VB| T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|      |      |      |      |      |      | T   B|

# result
can be produced
