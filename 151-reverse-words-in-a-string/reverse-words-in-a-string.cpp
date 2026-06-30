class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end());
        
        string ans = "";
        int i = 0;
        
        while (i < n) {
            // skip spaces
            while (i < n && s[i] == ' ') {
                i++;
            }
            
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            
            reverse(word.begin(), word.end());
            
            if (word.length() > 0) {
                if (!ans.empty()) ans += " ";
                ans += word;
            }
        }
        
        return ans;
    }
};