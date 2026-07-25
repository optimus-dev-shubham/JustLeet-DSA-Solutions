class Solution {
public:
    int maxProduct(int n) {
        int max = INT_MIN;
        int second_max = INT_MIN;

        while (n!=0){
            if(n%10>=max){
                second_max=max;
                max=n%10;
            }
            else if(n%10>second_max && n%10<max){
                second_max=n%10;
            }
            n/=10;
        }
        return max*second_max;
    }
};