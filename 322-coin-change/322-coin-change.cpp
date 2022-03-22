class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       // memset(dp,-1,sizeof(dp));
        int n=coins.size();
        int dp[n+1][amount+1];
        
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<=amount;j++)
        {
            dp[0][j]=1e9;
        }
            
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]= min(dp[i-1][j] , 1+ dp[i][j-coins[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
       if(dp[n][amount]==1e9)
       {
           return -1;
       }
        return dp[n][amount];
    }
};