class Solution {
public:
    int dp[55][55][55];
    long long ans=0;
    long long mod=1000000007;
    
    int helper( int i , int j, int n , int m, int maxi , int cn)
    {
        if( i<0 or j<0 or i>=n or j>=m  )
        {
            if(cn<=maxi)
            {
                return 1;
            }
            return 0;
        }
        if(cn>51)
        {
            return 0;
        }
        if(dp[i][j][cn]!=-1)
        {
            return dp[i][j][cn];
        }
        
        int l = helper(i-1,j,n,m,maxi,cn+1);
        int r = helper(i+1,j,n,m,maxi,cn+1);
        int u = helper(i,j+1,n,m,maxi,cn+1);
        int d = helper(i,j-1,n,m,maxi,cn+1);
        
       return dp[i][j][cn]=(u%mod + l%mod + r%mod + d%mod)%mod;
        
    }
    
    
    int findPaths(int n, int m, int maxMove, int startRow, int startColumn) {   
         
       memset(dp,-1,sizeof(dp));
        
       return helper(startRow,startColumn,n,m,maxMove,0);
        
        
    }
};