class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        unordered_map<char,int>freq;
        for(char ch : s){
            freq[ch]++;
        }
        bool add = false;
        for(auto&[ch,i]:freq){
            ans += (i/2)*2;
            if(i%2==1){
                add = true;
            }
            
        }
        
        return add ? ans+1:ans;
        
    }
};