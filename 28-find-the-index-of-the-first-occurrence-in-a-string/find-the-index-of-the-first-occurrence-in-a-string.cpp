class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for(int i = 0 ; i<n;i++){
            if(haystack.compare(i,m,needle) == 0){
                return i;

            }
        }
        
    return -1;      
    }
};