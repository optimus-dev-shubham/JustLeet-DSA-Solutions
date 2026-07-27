class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int smax = INT_MIN;

        for(int num :nums){
            if(num>=max){
                smax=max;
                max=num;
            }else if(num<max && num>=smax){
                smax=num;
            }
        }
        return (max-1)*(smax-1);
    }
};