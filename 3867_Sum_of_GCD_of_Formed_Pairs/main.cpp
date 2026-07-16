class Solution {
public:
    vector<int> maxElementFound(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            result.push_back(max(nums[i - 1], nums[i]));
        }
        return result;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int> maxElementArray;
        maxElementArray = maxElementFound(nums);

        vector<int> prefixGcd;
        for (int i = 0; i < nums.size(); i++) {
            prefixGcd.push_back(gcd(maxElementArray[i], nums[i]));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int low = 0;
        int high = prefixGcd.size() - 1;

        long long gcdSum = 0;
        while (low < high) {
            gcdSum += gcd(prefixGcd[low], prefixGcd[high]);
            low++;
            high--;
        }

        return gcdSum;
    }
};