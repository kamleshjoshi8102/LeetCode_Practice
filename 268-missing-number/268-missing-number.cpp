class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int su=0,n=INT_MIN,f=0;        
        for(int i=0;i<nums.size();i++)
        {
            su+=nums[i];
            n=max(nums[i],n);
            if(nums[i]==0)
            {
                f=1;
            }
        }
        if(f==0)
        {
            return 0;
        }
        int s=(n*(n+1))/2;
        if(s-su==0)
        {
            return n+1;
        }
        return s-su ;
    }
};