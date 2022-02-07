class Solution {
public:
    int bsearch(vector<int>nums,int lo,int hi , int target)
    {
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return bsearch(nums,0,nums.size()-1,target);
    }
};