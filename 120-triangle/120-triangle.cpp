class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& triangle, int i, int j)
    {
        int n = triangle.size();
        
        if(i == n-1) return triangle[n-1][j];
        if(dp[i][j] != -1) return dp[i][j];
        
        int down = solve(triangle, i+1, j);
        int diag = solve(triangle, i+1,j+1);
        
        return dp[i][j] = triangle[i][j] + min(down, diag);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        memset(dp, -1, sizeof(dp));
        return solve(triangle, 0, 0);
    }
};