class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int idx = 1;

        for (int x = nums[0] + 1; x < nums.back(); x++) {
            if (x == nums[idx]) {
                idx++;
            } else {
                ans.push_back(x);
            }
        }

        return ans;
    }
};