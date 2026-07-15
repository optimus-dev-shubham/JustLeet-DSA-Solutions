class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>last_seen(256,-1);

        int left = 0;
        int max_len = 0;

        for (int right = 0; right < s.size(); right++) {

            if (last_seen[s[right]] >= left) {
                left = last_seen[s[right]] + 1;
            }

            last_seen[s[right]] = right;

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};