class Solution {
public:
    int romanToInt(string t) {
        int sum = 0;
        unordered_map<char,int>s;
        s['I']=1;
        s['V']=5;
        s['V']=5;
        s['X']=10;
        s['L']=50;
        s['C']=100;
        s['D']=500;
        s['M']=1000;
        for(int i =  0 ; i<t.size();i++){
            if(i+1<t.size()&&s[t[i]]<s[t[i+1]]){
                sum -=s[t[i]];
            }else{
                sum +=s[t[i]];
            }
            
        }
        return sum;
        

        
    }
};