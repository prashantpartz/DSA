class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans =n;
        for(int i =0 ; i<n;i++){
            ans = nums[i]^i^ans;
        }     
        
        return ans;
        
    }
};