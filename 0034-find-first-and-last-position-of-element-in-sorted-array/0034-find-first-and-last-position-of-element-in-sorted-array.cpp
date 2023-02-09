class Solution {
public:
    
    int bsearch(vector<int>nums,int target,int res)
    {
           int start=0,end=nums.size()-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;
    
    }
    int bsearch1(vector<int>nums,int target,int res)
    {
           int start=0,end=nums.size()-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;
    
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        
        int first=bsearch(nums,target,-1);
        
        v.push_back(first);
        v.push_back(bsearch1(nums,target,-1));
        
        
        return v;
    }
};