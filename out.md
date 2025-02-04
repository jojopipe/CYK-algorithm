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
# table for cell 1,1
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|  A� |      |      |      |      |      |      |
# table for cell 2,2
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|  A� |      |      |      |      |      |      |
# table for cell 3,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|  A� |      |      |      |      |      |      |
# table for cell 4,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|  A� |      |      |      |      |      |      |
# table for cell 5,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |      |      |
|  A� |      |      |      |      |      |      |
# table for cell 6,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      |      |
# table for cell 7,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 1,2
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 2,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 3,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 4,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 5,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |      |
|  A� |      |      |      |      |      | T   B|
# table for cell 6,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB|      |      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 1,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|      |      |      |      |
|      |STA   |S   VB|      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 2,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|      |      |      |      |
|      |STA   |S   VB| T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 3,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|      |      |      |      |
|      |STA   |S   VB| T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 4,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|      |      |      |      |
|      |STA   |S   VB| T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   VB|      |
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 5,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|      |      |      |      |
|      |STA   |S   VB| T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 1,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB|      |      |      |
|      |STA   |S   VB| T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 2,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB|      |      |      |
|      |STA   |S   VB| T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 3,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB|      |      |      |
|      |STA   |S   VB| T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 4,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB|      |      |      |
|      |STA   |S   VB| T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 1,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|      |      |
|      |STA   |S   VB| T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 2,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|      |      |
|      |STA   |S   VB| T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 3,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|      |      |
|      |STA   |S   VB| T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 1,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB|      |
|      |STA   |S   VB| T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 2,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB|      |
|      |STA   |S   VB| T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# table for cell 1,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB|ST UVB|
|      |STA   |S   VB| T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   VB| T  VB|
|      |      |      |      |      |STA   |S   VB|
|  A� |      |      |      |      |      | T   B|
# finished table
|1|2|3|4|5|6| 7      |
|-|-|-|-|-|-|--------|
|STA   |S   VB| T  VB|ST  VB| T UVB|ST UVB| ST UVB |
|      |STA   |S   VB| T    |   U  | T    | T      |
|      |      | T   B|      |      |      |        |
|      |      |      | T   B|    V | T    | U      |
|      |      |      |      |STA   |S   VB| T  VB  |
|      |      |      |      |      |STA   | S   VB |
|  A� |      |      |      |      |      | T   B  |
# result
can be produced
