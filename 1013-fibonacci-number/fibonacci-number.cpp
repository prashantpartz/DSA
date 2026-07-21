class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
        int sum = 0 ;
        int prev = 0;
        int nxt = 0;
        int cur = 1;
        for(int i = 1 ; i<n ; i++){
            sum =  prev + cur;
            nxt = prev + cur;
            prev = cur;
            cur = nxt;
        }
        return sum ;
    }
};