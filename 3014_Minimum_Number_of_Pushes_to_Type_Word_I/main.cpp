class Solution {
public:
    int minimumPushes(string word) {
        int len = word.size();
        cout << len << endl;
        int ans = 0;
        int taps = 1;
        while (len >= 8) {
            ans += taps * 8;
            len -= 8;
            taps++;
        }
        ans += taps * (len % 8);
        return ans;
    }
};