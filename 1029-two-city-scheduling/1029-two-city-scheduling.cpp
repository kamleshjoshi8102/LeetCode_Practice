class Solution {
public:
    int dp[101][101];
    
    int helper(int i ,int acn,int bcn ,vector<vector<int>>&c)
    {
        if(dp[acn][bcn]!=-1)
        {
            return dp[acn][bcn];
        }
        if(i==c.size())
        {
            return 0;
        }
        int l=INT_MAX,r=INT_MAX;
        
        if(acn<c.size()/2)
        {
            l=c[i][0]+helper(i+1,acn+1,bcn,c);
        }
        if(bcn<c.size()/2)
        {
            r=c[i][1]+helper(i+1,acn,bcn+1,c);
        }
        return dp[acn][bcn]=min(l,r);
    }
    
    int twoCitySchedCost(vector<vector<int>>& c) {
            memset(dp,-1,sizeof(dp));
            return helper(0,0,0,c);
    }
};