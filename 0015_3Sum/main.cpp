class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> triplets;

        for (int i = 0; i < n - 2; i++) {
            // optimizations
            if (nums[i] > 0)
                break;
            if (nums[i] + nums[n - 2] + nums[n - 1] < 0)
                continue;
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            //actual logic
            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] +
                          nums[k]; // constraints are small , no need of 1LL*
                // int target = -nums[i];
                if (sum == 0) {
                    triplets.push_back({nums[i],nums[j],nums[k]});

                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;

                    j++;
                    k--;
                } else if (sum > 0)
                    k--;
                else
                    j++;
            }
        }
        return triplets;
    }
};