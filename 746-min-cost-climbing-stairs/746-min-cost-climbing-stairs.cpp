class Solution {
public:
 
    // 1 2 3 4 5 6 7 8 
    // 0 0 0 0 0 0 7 8
    int dp[1002];
    int memo(vector<int>nums,int  n)
    {
        if(n<0)
        {
            return 0;
        }
        if(n==0 || n==1)
        {
            return nums[n];
        }
        else if(dp[n]!=-1)
        {
            return dp[n];
        }
        else
        {
            return dp[n] =nums[n] + min( memo(nums,n-1) , memo(nums,n-2));
        }
    }
    int minCostClimbingStairs(vector<int>& cost) {
         int n=cost.size();
        memset(dp,-1,sizeof(dp));
         dp[n]=min(memo(cost,n-1) , memo(cost,n-2));
        return dp[n];
    }
};