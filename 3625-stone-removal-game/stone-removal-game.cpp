class Solution {
public:
    bool canAliceWin(int n) {
        bool t = true;
        int m =10;
        while(n>0){
            if(n<m)return !t;
            n -= m;
            t = !t;
            m--;

        }
        return !t;
       
        
    }
};