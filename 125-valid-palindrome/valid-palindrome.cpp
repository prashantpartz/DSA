class Solution {
public:
    bool isPalindrome(string s) {
        string cp = "";
        string str = "";
        for(char ch : s){
            if(int(ch)>=97&&int(ch)<=122){
                cp +=ch;
                }
            else if(int(ch)>=65&&int(ch)<=90){
               cp += (char)(ch + 32);
            }
            else if(int(ch)>=48 && int(ch)<=57){
                cp += ch;  
}
        
        }
        for(int i = cp.length()-1;  i>=0 ; i--){         
            str+=cp[i];
            }
        
     
            return str == cp;
    
    
    return false;
    }
};