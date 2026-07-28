class Solution {
public:
    string smallestPalindrome(string s) {
        int len = s.size();
        vector<int> count(26, 0);

        for (int i = 0; i < len / 2; i++) {
            count[s[i] - 'a']++;
        }
        int left = 0;
        int right = len - 1;
        for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                char c = i + 'a';
                s[left++] = c;
                s[right--] = c;

                count[i]--;
            }
        }
        return s;
    }
};