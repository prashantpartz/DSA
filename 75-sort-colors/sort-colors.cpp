class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i0 = 0;
        int i1 = 0;
        int i2 = 0; 
        int i =0;
        for( i = 0 ; i<n;i++){
            if(nums[i]==0){
                i0++;
            }
            else if(nums[i]==1){
                i1++;
            }else{
                i2++;
            }
        }
        int id = 0;
        for(i = 0;i<i0;i++){
            nums[id++] = 0;
        }
        for(i = 0;i<i1;i++){
            nums[id++] = 1;
        }
        for(i = 0;i<i2;i++){
            nums[id++] = 2;
        }
        
    }
};