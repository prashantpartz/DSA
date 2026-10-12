class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for (char ch : s) freq[ch]++;

        int ans = 0;
        bool hasOdd = false;
        for (auto& [ch, cnt] : freq) {
            ans += (cnt / 2) * 2;
            if (cnt % 2 == 1) hasOdd = true;
        }
        return hasOdd ? ans + 1 : ans;
    }
};