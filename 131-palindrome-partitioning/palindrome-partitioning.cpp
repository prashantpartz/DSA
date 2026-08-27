class Solution {
public:
    bool ispall(string p){
        string s = p;
        reverse(s.begin(),s.end());
        return s==p;
    }
    void getallparts(vector<vector<string>>&ans,vector<string>&part,string s){
        if(s.size()==0){
            ans.push_back(part);
            return;
        }
        for(int i = 0 ; i<s.size();i++){
            string path = s.substr(0,i+1);
            if(ispall(path)){
                part.push_back(path);
                getallparts(ans,part,s.substr(i+1));
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>part;
        getallparts(ans,part,s);
        return ans;
        
    }
};