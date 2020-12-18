<h1 align="center">Problem Statement</h1>

Given an `array` of size `N` and an integer `K`. Find if there's a `triplet` in the `array` which sums up to the given integer `K`.

```
Triplet Sum : A pair of 3 numbers whose sum is equals to K.
```

### Input :

The first line of the input contains an integer `T`, denoting the total number of `test cases`. Then T test cases follow. Each test case consists of three lines. First line of each test case contains an integer `N` denoting the size of the given `array`. Second line of each test case contains an integer `K` denoting the required triplet sum. Third line of each test case contains `N space separated integers` denoting the elements of the `array`.

### OUTPUT :

Print `True` if there exists a triplet in the `array`, which sums up to `K` and `False` otherwise.

### Constraints :

1. 1 ≤ N ≤ 10^3
2. 1 ≤ A[i] ≤ 10^5

### Example Input :

```
2
6
13
1 4 45 6 10 8
5
10
1 2 4 3 6
```

### Example Output :

```
True 
True
```
