class Solution {
public:
    int strStr(string haystack, string needle) {
        string s = "";
        int j= 0;
        int n = haystack.length();
        int m = needle.length();
        for(int i = 0 ; i<n;i++){
            string window = haystack.substr(i,m);
            if(window == needle){
                return i;

            }
        }
        
    return -1;      
    }
};