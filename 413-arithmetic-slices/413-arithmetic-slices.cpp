class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return false;
        }
            
        int prev_diff=nums[1]-nums[0];
        int in=0,cn=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            int diff=nums[i+1]-nums[i];
            if(prev_diff==diff)
            {
                in++;
            }
            else
            {
                prev_diff=diff;
                in=0;
            }
            cn+=in;
        }
        return cn;           
        
    }
};