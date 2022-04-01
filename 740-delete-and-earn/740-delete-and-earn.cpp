class Solution {
public:
  
    // int su=0;
    
//     int chck(vector<int>nums , int n ,   unordered_map<int,int>&mp)
//     {
//         if(n<=0)
//         {
//             if(mp.find(nums[0])!=mp.end())
//             {
//                 return nums[0];
//             }

//             return 0;
//         }
//     int nu=nums[n-1];
//         if(mp.find(nu+1)!=mp.end() || mp.find(nu-1)!=mp.end())
//             {
//                 return 0;
//             }
//         int l=chck(nums,n-1,mp);
        
//         mp[nu]++;
        
//         int r=chck(nums,n-1,mp)+nums[n-1];
   
//         return max(r,l);
//     }
    
    
//         unordered_map<int,int>mp;
//         int n=nums.size();
        
//         int su =chck(nums,n,mp);
        
//      return su;
    
    int deleteAndEarn(vector<int>& nums) {
        
        int N = 10002;
        
        int dp[N];
        int mp[N];
        for(int i=0;i<N;i++)
        {
            dp[i]=0;
            mp[i]=0;
        }
        
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        dp[0]=0;
        dp[1]=mp[1];

        for(int i=2;i<N;i++)
        {
            dp[i]=max(dp[i-1] , dp[i-2]+(mp[i]*i));
        }
        
        return (int)dp[N-1];        
    }
};

