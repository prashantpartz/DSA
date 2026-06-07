
class Solution {
public:
  
   int sumofsq(int n){

   int sum = 0;
    
            while(n>0){
                
                
                int x = std::pow(n%10,2);
                sum+=x;
                n/=10;
            }
            return sum;
            }


  bool isHappy(int n) {
    unordered_set <int> seen;
    while(n!=1){

   
    if(seen.count(n)){
        return false;
    }
    seen.insert(n);
    n = sumofsq(n);

                  
    }
    return true;
  }
};