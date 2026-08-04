class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i<9;i++){
            for(int j = 0; j<9;j++){
                if(board[i][j]=='.')continue;
                else{
                for(int k = 0 ; k<9;k++){
                    if(j==k)continue;
                    else{if(board[i][k] == board[i][j])return false;}
                }
                for(int l = 0 ;l<9;l++){
                    if(i==l)continue;
                    else{if(board[l][j]==board[i][j])return false;}
                }
                int mrow = (i/3)*3;
                int mcol = (j/3)*3;

                for(int m =  mrow;m<mrow+3;m++){
                    for(int p = mcol  ; p<mcol+3;p++){
                        if(m==i||p==j)continue;
                        if(board[m][p]==board[i][j])return false;
                    }
                }
            }
        }
        }
        return true;
        
    }
};