class Solution {
public:
    int dp[1002];
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
        if(nums.size()==1)
        {
            return nums[0];
        }
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        vector<int>temp1,temp2;
        for(int i=0;i<n;i++)
        {
            if(i!=0){temp1.push_back(nums[i]);}
            if(i!=n-1){temp2.push_back(nums[i]);}
        }
        int m1=maxi(temp1,temp1.size()-1);
        memset(dp,-1,sizeof(dp));
        int m2=maxi(temp2,temp2.size()-1);
        
        // cout<<m1<<' '<<m2<<endl;
        
        return max(m1,m2);
    }
};