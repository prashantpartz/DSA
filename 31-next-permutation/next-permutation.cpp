class Solution {
public:
    void nextPermutation(vector<int>&A){
        int n = A.size();
        int piv = -1;
        int j = n-2;
        while(j>=0){
            if(A[j]<A[j+1]){
                piv = j;
                break;
                }
            j--;
            }
        if(piv == -1){
            reverse(A.begin(),A.end());
            return;
            }
        j = n-1;
        while(A[j]<=A[piv]){
            j--;
        }
        swap(A[piv],A[j]);
            
            
        reverse(A.begin() + piv + 1  ,A.end());
        
    }

};