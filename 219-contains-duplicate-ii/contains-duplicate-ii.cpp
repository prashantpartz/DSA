#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> num_indices;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (num_indices.count(nums[i]) && (i - num_indices[nums[i]] <= k)) {
                return true;
            }
        
            num_indices[nums[i]] = i; 
        }
        
        return false;
    }
};