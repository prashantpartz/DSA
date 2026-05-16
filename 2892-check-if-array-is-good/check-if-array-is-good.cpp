class Solution {
public:
    bool isGood(vector<int>& nums) {
    int n = nums.size();
    
    vector<int>freq(n+1,0);
    for(int i = 0;i<n;i++){
        if(nums[i]>n-1){
            return false;
        }
        freq[nums[i]]++;

    }
    for(int i = 1;i<n-2;i++){ 
    if(freq[i]!=1){
        return false;
    }
    }
    return freq[n-1]==2;

    
     
    }
};