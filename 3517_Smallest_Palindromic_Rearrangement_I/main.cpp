class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string firstHalf;

        int midPoint = (n + 2 - 1) / 2; // ceil division

        for (int i = 0; i < midPoint; i++) {
            firstHalf += s[i];
        }

        sort(firstHalf.begin(), firstHalf.end());
        cout << firstHalf << " ";
        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        int startIndex = n % 2 == 0 ? 0 : 1;
        string ans = firstHalf;
        for (int i = startIndex; i < midPoint; i++) {
            ans = ans + secondHalf[i];
        }
        return ans;
    }
};