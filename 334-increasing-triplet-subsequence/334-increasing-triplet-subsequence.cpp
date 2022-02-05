class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int n=nums.size();
    int a=INT_MAX,b=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(b<nums[i])
            {
                return true;
            }
            if(a<nums[i])
            {
                b=min(b,nums[i]);
            }
            else
                a=min(nums[i],a);
        }
     return false;
    }
};