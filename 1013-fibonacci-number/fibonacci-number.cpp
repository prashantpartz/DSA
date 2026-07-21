class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
        int prev = 0;
        int nxt = 0;
        int cur = 1;
        for(int i = 1 ; i<n ; i++){
            nxt = prev + cur;
            prev = cur;
            cur = nxt;
        }
        return nxt ;
    }
};