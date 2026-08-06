class Solution {
public:
    bool issafe(int row, int co,vector<vector<char>>& board,int di){
        char digg = di+'0';
        for(int i = 0 ; i<9;i++){
           if(board[row][i]==digg){
             return false;
           }  
        }
        for(int j = 0 ; j<9;j++){
            if(board[j][co]==digg){
                return false;
            }      
        }
        int r = (row/3)*3;
        int c = (co/3)*3;
        for(int k = r ; k<r+3;k++){
            for(int l = c;l<c+3;l++){
            if(board[k][l]==digg){
                return false;
            }       
            }  
        }
        return true;
    }
    bool helper(int row,int col,vector<vector<char>>& board){
        if(row == 9){
            return true;
        }
        int nxtrow = row;
        int nxtcol = col+1;
        
        if(nxtcol==9){
            nxtcol = 0;
            nxtrow+=1;
        }
        if(board[row][col]!='.'){
            return helper(nxtrow,nxtcol,board);
        }
        for(int dig=1;dig<=9;dig++){
            if(issafe(row,col,board,dig)){
                board[row][col]='0'+dig;
                if(helper(nxtrow,nxtcol,board)){
                    return true;
                }
                board[row][col] = '.';
            }
            
        }
        return false;

        
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(0,0,board);
    }
};