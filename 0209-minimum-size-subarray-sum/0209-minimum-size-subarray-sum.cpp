class Solution {
public:

    
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini = INT_MAX;
        
        int i=0,j=0,n=nums.size();
        int su=0;
        
        
        while(i<n)
        {
            su+=nums[i];
            
            while(su>=target)
            {
                mini=min(mini,i-j+1);
                su=su-nums[j];
                j++;
            }
            i++;
        }
        return (mini==INT_MAX?0:mini);
        
        
    }
};