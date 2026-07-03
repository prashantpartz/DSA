class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even = n*(n+1);
        int odd = n*n;
        while(even>0 || odd >0){
            if(even == 0){return odd;}
            else if(odd == 0){return even;}
            else{
                if(even<odd){
                    odd = odd%even;
                }else{
                    even = even % odd;
                }
            }
        }
        
        return 0;
        
    }
};