class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        long long nums = 0;
       
            while(x>0){
                int n = x%10;
                nums = nums*10 + n;
                x = x/10;
        }

        
       
        return nums == org;
        
    }
};