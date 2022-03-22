class Solution {
public:
    int dp[302][5002];
    int ch(vector<int>coins  , int n  , int am)
    {
        if(n==0)
        {
            if(am==0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[n][am]!=-1)
        {
            return dp[n][am];
        }
        int nt_take=ch(coins,n-1,am);
        int take=0;
        if(coins[n-1]<=am)
        {
            take=ch(coins,n,am-coins[n-1]);
        }
        return dp[n][am]=take+nt_take;
    }
    
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        int ans=ch(coins,coins.size(),amount);
        return ans;
    }
};