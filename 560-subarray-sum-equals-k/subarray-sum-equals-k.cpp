class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int>prefnum(n,0);
        prefnum[0]=nums[0];
        for(int i = 1 ; i<n;i++){
            prefnum[i] = prefnum[i-1] + nums[i];
        }
        unordered_map<int,int>s;
        for(int i = 0 ; i<n;i++){
            if(prefnum[i]==k)count++;
            int val = prefnum[i]-k;
            if(s.find(val)!=s.end()){
                count += s[val];
            }
            
            s[prefnum[i]]++;      
        }
        return count;     
    }
};