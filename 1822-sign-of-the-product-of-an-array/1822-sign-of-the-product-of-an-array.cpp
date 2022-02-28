class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ne=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                return 0;
            }
            if(nums[i]<0)
            {
                ne++;
            }
        }
        if(ne%2==0)
        {
                return 1;
        }
        return -1;
        
}
};