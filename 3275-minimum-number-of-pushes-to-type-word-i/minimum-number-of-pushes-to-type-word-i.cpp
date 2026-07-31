class Solution {
public:
    int minimumPushes(string word) {
        int push = 0;
        for(int i = 0;i<word.size();i++){
            if(i<8) push++;
            else if(i<16) push+=2;
            else if(i<24) push+=3;
            else push += 4;

        }
        return push;  
    }
};