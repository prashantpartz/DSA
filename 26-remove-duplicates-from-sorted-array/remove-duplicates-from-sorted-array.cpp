class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if(nums.size()<=1){
        return nums.size();
        }
    int prev = nums[0];
    int cur = nums[1];
    
    
    for(int i = 1;i<nums.size();i++){
        if(prev == cur){
            nums.erase(nums.begin()+i);
            i--;
            if(i+1<nums.size()){
            prev = cur;
            cur = nums[i+1];
            }
            
        }else{
            if(i+1<nums.size()){
            prev = cur;
            cur = nums[i+1];
            }
        }
    }
    
    return nums.size() ;
        

    
    }
};