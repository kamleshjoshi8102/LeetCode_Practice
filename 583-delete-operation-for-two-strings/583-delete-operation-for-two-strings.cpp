class Solution {
public:
    int minDistance(string x, string y) {
        int n=x.size();
        int m=y.size();
        
       
	     int dp[n+1][m+1];
	      for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int su=n+m;
        int lc=2*dp[n][m];
        return su-lc;
        
    }
};