class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy = arr;
        sort(copy.begin(),copy.end());
        int r = 1;
        unordered_map<int,int>rank;
        for(int i = 0 ; i<copy.size();i++){
            if(rank.find(copy[i])==rank.end()){
                rank[copy[i]]=r;
                r++;
            }

        }
        vector<int>ans(copy.size(),0);
        for(int i = 0 ; i<copy.size();i++){
            ans[i]=rank[arr[i]];
        }
        return ans;
        
    }
};