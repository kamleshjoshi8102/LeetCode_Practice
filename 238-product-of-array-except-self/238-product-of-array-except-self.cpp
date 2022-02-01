class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>res(nums.size());
        int pre=1,suff=1;
        for(int i=0;i<nums.size();i++)
        {
            res[i]=pre;
            pre=nums[i]*pre;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            res[i]=res[i]*suff;
            suff=suff*nums[i];
        }
       return res;
    }
};