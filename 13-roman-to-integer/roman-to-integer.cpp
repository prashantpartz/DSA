class Solution {
public:
    int romanToInt(string t) {
        int vals[128] = {0}; 
        vals['I']=1; vals['V']=5; vals['X']=10; vals['L']=50;
        vals['C']=100; vals['D']=500; vals['M']=1000;
        
        int sum = 0;
        int n = t.size();
        for(int i = 0; i < n; i++){
            if(i+1 < n && vals[t[i]] < vals[t[i+1]]){
                sum -= vals[t[i]];
            } else {
                sum += vals[t[i]];
            }
        }
        return sum;
    }
};