class Solution {
public:
    
    int bsearch(vector<int>nums)
    {
        int n=nums.size();
        int lo=0,hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            
            if(nums[mid]<0)
            {
                ans=mid;
              }
            
            if(nums[mid]>=0)
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }       
        }
        return ans;
  
    }
    
    
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        
        for(auto x:grid)
        {
            int y=bsearch(x);
            if(y==-1)
            {
                continue;
            }
            int n=x.size()-y;
            // cout<<n<<' ';
            ans+=n;
            // cout<<bsearch(x)<<endl;
        }
        
        return ans;
    }
};






