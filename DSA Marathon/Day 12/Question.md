<h2 align="center">Problem Statement</h2>

A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of `N` people, find if there is a celebrity in the party or not.

A square `NxN matrix M[][]` is used to represent people at the party such that if an element of `row i` and `column j`  is set to `1` it means ith person knows jth person. Here `M[i][i]` will always be `0`.
`Note: Follow 0 based indexing`.

### Input :
The first line of the input contains a single integer `T` denoting the number of `test cases`. The description of `T` test cases follows.The first line of each test case contains a single integer `N`. The next `N` lines describe the `matrix`.

### Output :
Print the index of the celebrity. If no such celebrity is present, print -1.

### Constraints :
<ul>
  <li>2 <= N <= 3000</li>
  <li>0 <= M[][] <= 1</li>
</ul>

### Example Input :
```
2
3
0 1 0
0 0 0
0 1 0
2
0 1
1 0
```

### Example Output :
```
1
-1
```
