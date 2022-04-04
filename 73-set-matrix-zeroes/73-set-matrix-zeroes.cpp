class Solution {
public:
    void setZeroes(vector<vector<int>>& mt) {
        int n=mt.size();
        int m=mt[0].size();
        
        vector<bool>row(n,false);
        vector<bool>col(m,false);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mt[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    mt[i][j]=0;
                }
            }
        }
        return;        
    }
};