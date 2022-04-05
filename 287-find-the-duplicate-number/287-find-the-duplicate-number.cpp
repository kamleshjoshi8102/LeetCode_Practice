class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int get_index=abs(nums[i]);
            if(nums[get_index-1]<0)
            {
                return get_index;
            }
            nums[get_index-1]=nums[get_index-1]*(-1);   
        }
        return ans;
    }
};