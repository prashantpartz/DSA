class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =0;
        int n = nums.size();
        int prev = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]!=prev){
                prev = nums[i];
                nums[j++]=nums[i];
                
            }
            
            
        }

    return j;
    }
};