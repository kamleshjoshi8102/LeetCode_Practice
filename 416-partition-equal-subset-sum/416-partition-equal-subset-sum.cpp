/*class Solution {
public:
    bool canPartition(vector<int>& nums) {
        sum = accumulate(nums.begin(), nums.end(), sum);
       
        return (sum%2==0) && solve(nums, sum/2);
    }
private:
    int sum = 0;
    
    bool solve(vector<int> &nums, int sum){
        int n = nums.size();
        bool dp[n+1][sum + 1];
        
        for(int i=0;i<=n;i++) dp[i][0] = true; //subset with 0 sum
        
        for(int j=1;j<=sum;j++) dp[0][j] = false; //non-zero sum with 0 elements
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1] > j) dp[i][j] = dp[i-1][j]; //don't include ith element if it's greater then the rem sum
                else dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
               
            }
        }
        
        return dp[n][sum];
        
        
    }
};*/

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