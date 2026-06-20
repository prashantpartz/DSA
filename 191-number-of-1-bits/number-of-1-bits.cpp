class Solution {
public:
    int hammingWeight(int n) {
        int r = 0;
        long ans = 0;
        while(n>0){
            r = n%2;
            if(r==1){
                ans++;
            }
            n/=2;

        }
        return ans;

        
    }
};