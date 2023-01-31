class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int res=-199999;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            
            int j=i+1,k=nums.size()-1;
            
            while(j<k)
            {
                int su=nums[i]+nums[j]+nums[k];
                
           
                if(su>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
                if(abs(su-target)<abs(res-target))
                {
                    res=su;
                }
            }
            
        }
        
        return res;
    
        
        
        
    }
};