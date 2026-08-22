class Solution {
public:
    void combsum(vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int>&combi,int idx){
        if(idx==candidates.size()||target<0){
            return;
        }
        if(target==0){
            ans.push_back({combi});
            return;
        }
        combi.push_back(candidates[idx]);
        combsum(candidates,target-candidates[idx],ans,combi,idx);
        combi.pop_back();
        combsum(candidates,target,ans,combi,idx+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>combi;
        combsum(candidates,target,ans,combi,0);
        return ans;   
    }
};