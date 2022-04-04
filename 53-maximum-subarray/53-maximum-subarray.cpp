class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int su=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            su+=nums[i];
            maxi=max(su,maxi);
            if(su<0)
            {
                su=0;
            }
        }
        return maxi;
    }
};