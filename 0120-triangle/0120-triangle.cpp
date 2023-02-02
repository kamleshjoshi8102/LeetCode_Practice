class Solution {
public:
    int dp[201][201];
    
    int helper(vector<vector<int>>&triangle,int i, int j)
    {
        int n = triangle.size();

        if(i == n-1) return triangle[i][j];
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int down  = helper(triangle,i+1,j);
        int right = helper(triangle,i+1,j+1);
        
        return dp[i][j] = triangle[i][j] + min(down,right);
        
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        memset(dp,-1,sizeof(dp));
        int n = triangle.size();
        
        return helper(triangle,0,0);
    }
};