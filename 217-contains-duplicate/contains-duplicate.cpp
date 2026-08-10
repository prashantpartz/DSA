class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>ans;
        for(int i : nums){
            if(ans.find(i)!=ans.end()){
                return true;
            }
            ans.insert(i);

        }
        return false;
        
    }
};