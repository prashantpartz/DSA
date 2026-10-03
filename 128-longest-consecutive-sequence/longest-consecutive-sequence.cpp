class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int best = 1, cur = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue;        
            if (nums[i] == nums[i - 1] + 1) cur++;         
            else cur = 1;                                  
            best = max(best, cur);
        }
        return best;
    }
};