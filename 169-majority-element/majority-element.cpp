class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    int count = 0;
    sort(nums.begin(),nums.end());
    int ans = nums[0];
    for(int i = 1;i<n;i++){
        if(nums[i]==nums[i-1]){
            count++;
            }
        else{
            count = 1;
            ans = nums[i];
            }
    if(count>n/2){
        return nums[i];
    }
    }  
    
    return nums[0];
    

    }
};