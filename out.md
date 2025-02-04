# grammar
```
S -> a | AT
T -> a | b | VT | SU
A -> a
U -> VV
V -> BA | AT | SS
B -> b
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
# table for cell 1,1
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# table for cell 2,2
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# table for cell 3,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# table for cell 4,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# table for cell 5,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |      |      |
|      |      |      |      |      |      |      |
# table for cell 6,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      |      |
# table for cell 7,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |      |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 1,2
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |      |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 2,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 3,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|      |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 4,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |      |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 5,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |      |
|      |      |      |      |      |      | T   B|
# table for cell 6,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V |      |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 1,3
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |      |      |      |      |
|      |STA   |S   V |      |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 2,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |      |      |      |      |
|      |STA   |S   V | T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 3,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |      |      |      |      |
|      |STA   |S   V | T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V |      |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 4,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |      |      |      |      |
|      |STA   |S   V | T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   V |      |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 5,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |      |      |      |      |
|      |STA   |S   V | T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 1,4
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V |      |      |      |
|      |STA   |S   V | T    |      |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 2,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V |      |      |      |
|      |STA   |S   V | T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 3,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V |      |      |      |
|      |STA   |S   V | T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |      |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 4,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V |      |      |      |
|      |STA   |S   V | T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 1,5
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |      |      |
|      |STA   |S   V | T    |   U  |      |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 2,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |      |      |
|      |STA   |S   V | T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 3,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |      |      |
|      |STA   |S   V | T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 1,6
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |ST UV |      |
|      |STA   |S   V | T    |   U  | T    |      |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 2,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |ST UV |      |
|      |STA   |S   V | T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# table for cell 1,7
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |ST UV |ST UV |
|      |STA   |S   V | T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|
# finished table
|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|STA   |S   V | T  V |ST  V | T UV |ST UV |ST UV |
|      |STA   |S   V | T    |   U  | T    | T    |
|      |      | T   B|      |      |      |      |
|      |      |      | T   B|    V | T    |   U  |
|      |      |      |      |STA   |S   V | T  V |
|      |      |      |      |      |STA   |S   V |
|      |      |      |      |      |      | T   B|

# result
can be produced
