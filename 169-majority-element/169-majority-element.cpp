class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cn=1,in=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[in]==nums[i])
            {
                cn++;
            }
            else
            {
                cn--;
            }
            if(cn<0)
            {
                in=i;
                cn=1;
            }
        }
        cn=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[in]){cn++;}
        }
        if(cn>=nums.size()/2){return nums[in];}
        return -1;
        // return maxie;
    }
};