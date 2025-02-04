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
aabbaabaab
# empty table
|1|2|3|4|5|6|7|8|9|10|
|-|-|-|-|-|-|-|-|-|-|
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|!?   |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
# empty table after memset
|1|2|3|4|5|6|7|8|9|10|
|-|-|-|-|-|-|-|-|-|-|
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|!?   |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |      |      |      |
# finished table
|1|2|3|4|5|6|7|8|9|10|
|-|-|-|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB|ST UVB|ST UVB|ST UVB|ST UVB|
|      |STA   |S   VB| T    |   U  | T    | T    | T    | T    | T    |
|      |      | T   B|      |      |      |      |      |      |      |
|      |      |      | T   B|    V | T    |   U  | T U  | T U  | T    |
|      |      |      |      |STA   |S   VB| T  VB|ST UVB|ST UVB|ST UVB|
|      |      |      |      |      |STA   |S   VB| T  VB|ST UVB| T U  |
|!?   |      |      |      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |      |      |      |STA   |S   VB|
|      |      |      |      |      |      |      |      |      | T   B|
# result
can be produced
