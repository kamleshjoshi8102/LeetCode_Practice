class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cn=0;
    
        int pro=1;
        int j=0,i=0,n=nums.size();
        while(i<n)
        {
            pro=pro*nums[i];
                
            while(pro>=k and  j<=i)
            {
                pro=pro/nums[j];
                j++;
            }
            cn=cn+(i-j)+1;    
            i++;
        }
        
        
        return cn;
             
        
  
    }
};