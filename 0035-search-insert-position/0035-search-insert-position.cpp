class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int lo=0,hi=nums.size();
        if(target>nums[hi-1])
        {
            return hi;
        }
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
             if(nums[mid]==target) return mid;
            if(nums[mid]<target)
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        if(target>nums[nums.size()-1])
        {
            return nums.size()+1;
        }
        if(hi<0){
            return 0;
        }
        return hi+1;
    }
};