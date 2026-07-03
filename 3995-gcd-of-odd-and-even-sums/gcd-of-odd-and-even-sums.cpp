class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a = n*(n+1);
        int b = n*n;
        while(a!=0){
            int temp = b%a;
            b = a;
            a = temp;
            
        }
        
        return b;
        
    }
};