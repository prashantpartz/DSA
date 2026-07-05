class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>num(nums.begin(),nums.end());
        vector<int>cop(num.begin(),num.end());
        int n = cop.size();
        if(n<3){return cop[n-1];}
        return cop[n-3]; 
    }
};