class Solution {
public:
    bool isPowerOfThree(int n) {
        long long mul = 1;
        if(n<1)return false;
        while(mul < n){
            mul = mul*3;
            }
            return mul == n;
    }
};