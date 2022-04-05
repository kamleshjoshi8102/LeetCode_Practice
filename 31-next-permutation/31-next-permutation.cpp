class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
        {
            return;
        }
        if(is_sorted(nums.begin(),nums.end()))
        {
            int n=nums.size();
            swap(nums[n-1],nums[n-2]);
            return;
        }
        vector<int>nu=nums;
        sort(nu.begin(),nu.end(),greater<int>());
        
        if(nu==nums)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int n=nums.size();
        
        for(int i=n-1;i>=0;i--)
        {
           for(int j=n-1;j>i;j--)
           {
               if(nums[j]>nums[i])
               {
                   swap(nums[i],nums[j]);
                   sort(nums.begin()+i+1,nums.end());
                   return;
               }
           }
        }
        
        
    }
};