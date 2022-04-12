class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>v=board;
        
        int n=board.size(),m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cn=0;
                 if(i>0 && j<m-1 && board[i-1][j+1]==1){
                       cn++;
                }
                if(i<n-1 and j>0 and board[i+1][j-1]==1)
                {
                    cn++;
                }
                if(i<n-1 and board[i+1][j]==1)
                {
                    cn++;
                }
                if(j<m-1 and board[i][j+1]==1)
                {
                    cn++;
                }
                if(i>0 and board[i-1][j]==1)
                {
                    cn++;
                }
                if(j>0 and board[i][j-1]==1)
                {
                    cn++;
                }
                if(j>0 and i>0 and board[i-1][j-1]==1)
                {
                    cn++;
                }
                if(i<n-1 and j<m-1 and board[i+1][j+1]==1)
                {
                    cn++;
                }
               if(board[i][j]==1)
               {
                    if(cn<2 || cn>3)
                    {
                        v[i][j]=0;
                    }
                    
               }
                else
                {
                    if(cn==3)
                    {
                        v[i][j]=1;
                    }
                }
                // cout<<i<<' '<<j<<' '<<cn<<endl;
            }
        }
        board=v;    
    }
};