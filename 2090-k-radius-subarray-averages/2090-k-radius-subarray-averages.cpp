class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n= nums.size();
        vector<long long>presum(n+1,0);
        presum[0]=0;
        
        for(int i=0;i<n;i++)
        {
            presum[i+1]=presum[i]+nums[i];
        }
        vector<int>ans(n,-1);
        
        for(int i=k;i+k<n;i++)
        {
             
                ans[i] = ((presum[i+k+1]-presum[i-k])/((k*2)+1));
            
        }
        return ans;
        
    }
};