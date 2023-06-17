class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int su = 0;
        int res = INT_MIN;
        int cn = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(su<0)
            {
                su=0;
                cn=0;
            }
             
            su+=nums[i];
            cn++;
            
            // cout<<su<<endl;
            res= max(su,res);
        }
        return res;
        
    }
};