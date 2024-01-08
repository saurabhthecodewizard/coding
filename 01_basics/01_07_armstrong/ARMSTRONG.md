# Problem Name 
Armstrong Number

## Problem Description

Given a number, check if it is Armstrong Number or Not.

## Difficulty - Medium

## Time Complexity
O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.

## Space Complexity
O(1) since no extra space is required

## Example 1:
```
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153
```

## Example 2:
```
Input:170 
Output: No, it is not an Armstrong Number
Explanation: 1^3 + 7^3 + 0^3 != 170
```