class Solution {
public:
    int dp[1001];
    int maxi(vector<int>nums,int n)
    {
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        else
        {
            return dp[n]=max( maxi(nums,n-1) , nums[n]+maxi(nums,n-2) );
        }
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return maxi(nums,nums.size()-1);
    }
};