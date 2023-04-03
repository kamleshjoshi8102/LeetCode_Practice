class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        if(nums.size()==1 && val !=nums[0])
        {
            return 1;
        }
        int n=j;
        while(i<=n && j>=i)
        {
            if(nums[i]==val && nums[j]!=val)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else if(nums[j]==val)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return i;
        
    }
};