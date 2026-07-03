class Solution {
public:
    long reverse(int n) {
        long sum = 0;
        while(n!=0){
            int la = n%10;
            sum = (sum*10)+la;
            n/=10;
            
        }
        if(sum > INT_MAX || sum < INT_MIN){return 0;}
        return sum;
    }
};