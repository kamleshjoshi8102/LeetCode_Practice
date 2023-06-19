class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,num=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==num)
            {
                cnt++;
            }
            else 
            {
                if(cnt==0)
                {
                    num=nums[i];
                    cnt++;
                }
                else
                {
                    cnt--;
                }
            }
        }
        return num;
    }
};