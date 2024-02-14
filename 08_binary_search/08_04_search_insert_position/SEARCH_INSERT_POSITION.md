# Problem Name 
Upper Bound

## Problem Description

Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

The upper bound is the smallest index, ind, where arr[ind] > x.

## Difficulty - Medium

## Time Complexity
O(logn)

## Space Complexity
O(1)

## Example 1:
```
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x
```

## Example 2:
```
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.
```