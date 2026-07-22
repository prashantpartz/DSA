class Solution {
public:
    void  sub (vector<int>& nums,vector<vector<int>>&ans,vector<int>&cur,int i){
        
        if(i==nums.size()){
            ans.push_back(cur);
            return;
            
        }
        cur.push_back(nums[i]);
        sub(nums,ans,cur,i+1);
        cur.pop_back();
        sub(nums,ans,cur,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>cur;
        int i = 0;
        sub(nums,ans,cur,i);
        return ans;

        
    }
};