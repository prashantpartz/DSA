class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = 0;
        int n = part.size();
        while(i<s.size()){
            if(s.substr(i,n)== part){
                s.erase(i,n);
                i = 0;
            }else{
                i++;
            }
          
        }
        return s;
        
    }
};