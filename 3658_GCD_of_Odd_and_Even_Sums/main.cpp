class Solution {
public:
    int solve(int a, int b) {
        int n = a > b ? b : a;
        int ans = 0;
        for (int i = n; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
    int gcdOfOddEvenSums(int n) { return solve(n * (n + 1), n * n); }
};