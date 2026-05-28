class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for( int i = 0 ; i<n-1;i+=2){
            if( i == n-1||nums[i]!=nums[i+1]){
                return nums[i];
                }
            }
        return nums[n-1];
        
    }
};