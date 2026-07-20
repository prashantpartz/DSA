class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int min = INT_MAX;
        int n = arr.size();
        for(int i = 1;i<n;i++){
            int dif = abs(arr[i]-arr[i-1]);
            if(min > dif){
                min=dif;
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});
            }else if(min==dif){
                ans.push_back({arr[i-1],arr[i]});

            }
        }

            return ans;
        
    }
};