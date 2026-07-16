class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string str = "";
        while(i>=0||j>=0||carry){
            int sum = 0;
            int d1,d2;
            if(i>=0){
                d1=num1[i]-'0';
            }else{
                d1=0;
            }
            if(j>=0){
                 d2=num2[j]-'0';
            }else{
                d2=0;
            }
            sum = carry + d1 + d2 ;
            str.push_back(char(('0'+(sum%10))));
            carry = sum/10;
            i--;
            j--;
        }
        reverse(str.begin(),str.end() ); 
        return str;          
    }
};