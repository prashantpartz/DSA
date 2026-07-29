class Solution {
public:
    bool issafe(int row , int col,int n,vector<string>&board){
        for(int j = 0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        for(int i = 0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for( int i=row-1,j = col-1;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;


    }
    void nqueens(vector<string>&board,vector<vector<string>>&ans,int row,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j = 0 ; j<n ; j++){
            if(issafe(row,j,n,board)){
                board[row][j]='Q';
                nqueens(board,ans,row+1,n);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        nqueens(board,ans,0,n);
        return ans;
        
    }
};