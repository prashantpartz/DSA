class Solution {
public:
    string largestNumber(vector<int>& nums) {
    
        vector<string> strs;
        for (int i : nums) {
            strs.push_back(to_string(i));
        }

        sort(strs.begin(), strs.end(), [](string a, string b) {
            return a + b > b + a;
        });

    
        string ans = "";
        for (string s : strs) {
            ans += s;
        }

        if (ans[0] == '0') {
            return "0";
        }

        return ans;
    }
};