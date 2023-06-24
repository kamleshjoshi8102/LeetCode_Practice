class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        
        int ctr=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ctr=0;
            }
            else
            {
                ctr++;
            }
        maxi=max(ctr,maxi);
        }
        return maxi;
    }
};