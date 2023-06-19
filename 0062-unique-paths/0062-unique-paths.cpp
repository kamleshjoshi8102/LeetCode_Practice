class Solution {
public:
    int dfs(int i,int j, int n,int m, vector<vector<int>>&dp)
    {
        if(i>=n or j>=m or i<0 or j<0)
        {
            return 0;
        }
        if(i==n-1 and j==m-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j] = dfs(i+1,j,n,m,dp)+dfs(i,j+1,n,m,dp);
    }
    int uniquePaths(int n, int m) {
        
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return dfs(0,0,n,m,dp);
    }
};