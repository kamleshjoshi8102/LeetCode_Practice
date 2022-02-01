class Solution {
public:    
    bool canPartition(vector<int>& nums) {
        int su=0;
        for(auto x:nums)
        {
            su+=x;
        }
        if(su%2!=0)
        {
            return false;
        }
        return solve(nums,su/2) && (su%2==0);
    }
private:
        
    bool solve(vector<int>v, int sum)
    {
        int n=v.size();
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int j=1;j<=sum;j++)
        {
            dp[0][j]=false;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(v[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-v[i-1]]  || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        
        
    }
};