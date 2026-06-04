class Solution {
public:
    int mySqrt(int x) {
        
        int st  = 1;
        int end = x/2+1;
        
        while(st<=end){
            long long mid = st + (end-st)/2;
            if((mid*mid)==x){
                return mid;
            }
            else if((mid*mid)<x){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return st-1;
    }
};