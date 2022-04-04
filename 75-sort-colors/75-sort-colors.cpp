class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        
        while(i<n)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
        i=n-1,j=n-1;
        
        while(i>=0)
        {
            if(nums[i]==2)
            {
                swap(nums[i],nums[j]);
                j--;
            }
            i--;
        }
        
    }
};