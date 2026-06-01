class Solution {

public:
    bool isvalid(vector<int>nums,int mid,int n,int k){
            int sum = 0; 
            int std = 1;
            for(int i = 0 ;i<n;i++){
                if(nums[i]>mid){return false;}
                if(sum+nums[i]<=mid){
                    sum += nums[i];
                }else{
                    sum = nums[i];
                    std++;
                }
            }
            if(std>k){
                return false;
            }else{return true;}
    }    
    
    int splitArray(vector<int>& nums, int k) {
        int max = std::accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int st = 0;
        int end = max;
        int ans = 0;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isvalid(nums,mid,n,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};