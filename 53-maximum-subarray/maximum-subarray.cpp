class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int n = nums.size();
        int sum = 0;
        for(int st=0;st<n;st++){
                sum+=nums[st];
                Max = max(sum,Max);
                if(sum<0){
                    sum = 0;
                }
            }
        
        return Max;
        
    }
};