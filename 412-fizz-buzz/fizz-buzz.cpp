class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> s(n);
        int i = 1;
        while(i<=n){
            if(i % 3 == 0&& n>2&& i % 5==0){
                s[i-1] = "FizzBuzz";
            }
            
            else if(i % 3 == 0&& n>2){
                s[i-1] = "Fizz";
            }
            else if(i % 5==0&& n>2){
                s[i-1] = "Buzz";
            }
            else{
            s[i-1]= to_string(i);
            }
            i++;
        }
        return s;

        
    }
};