class Solution {
public:
    int dp[1002];
    int dps(vector<int>v ,  int n )
    {
         if(n<0)
         {
             return 0;
         }
        if(dp[n]==-1)
        {
            dp[n]= max(v[n] + dps(v,n-2) , dps(v,n-1));
        }
        return dp[n];
    }
    
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        
        return dps(nums,nums.size()-1);
        
    }
};
//