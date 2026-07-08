class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int st = 0;
        int end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(target>=mat[mid][0] && target <= mat[mid][m-1]){
                return srch(mid,m,mat,target);
            }else if(target<=mat[mid][0]){
                end = mid-1;
            }else {
                st = mid +1;
            }
        }
        return false;
        
    }
    bool srch(int mid,int m,vector<vector<int>>& mat, int target){
            int ST = 0;
            int END = m-1;
            while(ST <= END){
                int MID = ST+(END-ST)/2;
                if(mat[mid][MID] == target){
                    return true;
                }
                else if(target <= mat[mid][MID]){
                    END= MID-1;

                }else{
                    ST=MID+1;
                }
            }
            return false;
        }
};