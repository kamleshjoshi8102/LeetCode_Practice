class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        
        int maxi=0,cn=0;
        
        while(i<n)
        {
            if(nums[i]==0)
            {
                cn = nums[i]==0?cn+1:cn;
                
                if(cn>1)
                {
                    while(cn>1)
                    {
                        if(nums[j]==0)
                        {
                            cn--;
                        }
                        j++;
                    }
                }
                
                // cout<<i<<" "<<j<<endl;
                
            }
            
            maxi=max(maxi,i-j);
            
            i++;
        }
        return maxi;
        
        
    }
};