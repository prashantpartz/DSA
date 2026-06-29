class Solution {
public:
    bool check(int srch[], int wind[]){
        for(int j = 0 ; j<26;j++){
                if(srch[j]!=wind[j]){
                    return false;
                }
            }
            return true;
    }
    bool checkInclusion(string s1, string s2) {
        int srch[26] = {0};
        for(int i = 0 ; i<s1.length();i++){
            srch[s1[i]-'a']++;
        }
        for(int i = 0 ;i<s2.length();i++){
            int wind[26] =  {0};
            int idx = i; 
            int win = 0;
            while(win<s1.length()&&idx<s2.length()){
                wind[s2[idx]-'a']++;
                win++;
                idx++;
            }
            bool flag = true;
            for(int j = 0 ; j<26;j++){
                if(srch[j]!=wind[j]){
                    flag = false;
                    break;
                }
            }
            if(check(srch,wind)){return true;}
            
            
        }
        
        
        return false;
        

        
    }
};