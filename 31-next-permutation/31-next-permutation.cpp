class Solution {
public:
    void nextPermutation(vector<int>&nums) {
        vector<int>check=nums;
        vector<int>check1=nums;
        sort(check.begin(),check.end(),greater<int>());
        sort(check1.begin(),check1.end());
        if(nums.size()==1)
        {
            return;
        }
        if(check1==nums)
        {
            swap(nums[nums.size()-1],nums[nums.size()-2]);
            // for(auto x:nums)
            // {
            //     cout<<x<<' ';
            // }
            // cout<<endl;
            return;
        }
        if(nums==check)
        {
            nums=check1;
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