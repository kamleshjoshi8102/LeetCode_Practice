class Solution {
public:
    
    int helper(vector<int>nums,int target)
    {
        int n=nums.size();
        int lo=0,hi=n-1;
        int ans=-1;
        // cout<<endl<<' '<<target<<" ";
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            
            if(nums[mid]>=target)
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
            // cout<<mid<<' ';
        }
        return ans;
    
    }
    
    int specialArray(vector<int>& nums) {
        int cn=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=nums[n-1];
     
        
        for(int i=0;i<=maxi;i++)
        {
            int ch=helper(nums,i);
            
            if(ch==-1)
            {
                continue;
            }
            // cout<<i<<' '<<ch<<endl;
            ch=n-ch;
            if(ch==i)
            {
                return i;
            }  
        }
 
        return -1;
        
    }
};