class Solution {
public:
    
    int is_possible(vector<int>nums,int mid,int m)
    {
        int cn=1;
        int temp_sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(temp_sum+nums[i]<=mid)
            {
                temp_sum+=nums[i];
            }
            else
            {
                temp_sum=nums[i];
                cn++;
            }
        }
        return (cn<=m);
        
    }
    
    
    
    int splitArray(vector<int>& nums, int m) {
        int lo=0,hi=0;
        
        int maxi=INT_MIN;
        int su=0;
        for(auto x:nums)
        {
            su+=x;
            maxi=max(x,maxi);
        }
        lo=maxi;
        hi=su;
        int ans=0;
        while(lo<=hi)
        {
            int mid= lo + (hi - lo)/2;
            if(is_possible(nums,mid,m)==true)
            {
                // cout<<mid<<' '<<endl;
                hi=mid-1;
                ans=mid;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};