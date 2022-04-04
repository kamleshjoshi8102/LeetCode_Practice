class Solution {
public:
    void setZeroes(vector<vector<int>>& mt) {
        int n=mt.size();
        int m=mt[0].size();
        bool check=false;
        
        for(int i=0;i<n;i++)
        {
            if(mt[i][0]==0)
            {
                check=true;
            }
            for(int j=1;j<m;j++)
            {
                if(mt[i][j]==0)
                {
                    mt[i][0]=0;
                    mt[0][j]=0;
                }
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(mt[i][0]==0 || mt[0][j]==0)
                {
                    mt[i][j]=0;
                }
            }
            if(check==true)
            {
                mt[i][0]=0;
            }
        }
      
        
        
    }
};