# 441. Arranging Coins

## Problem Information

- Difficulty: Easy
- Language: cpp
- Runtime: 0 ms Beats 100.00%
- Memory: 8.89 MB Beats 38.08%

---

## Problem Description

You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the ith row has exactly `i` coins. The last row of the staircase **may be** incomplete.

Given the integer `n`, return *the number of **complete rows** of the staircase you will build*.

## Example 1

![Image](https://assets.leetcode.com/uploads/2021/04/09/arrangecoins1-grid.jpg)

```text
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
```

## Example 2

![Image](https://assets.leetcode.com/uploads/2021/04/09/arrangecoins2-grid.jpg)

```text
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
```

## Constraints

	- 1 <= n <= 2³¹ - 1