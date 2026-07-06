class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int j = 0;
        for(int i = 0;i<n;i++){
            j = n-i-1;
            sum += mat[i][i];
            if(i!= n-i-1){
                sum+=mat[i][j];
            }
        }
return sum;
    }
};