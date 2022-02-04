class Solution {
public:
    
    // if we found 1 increase 
        // else decrease it 
    
    int findMaxLength(vector<int>& nums) {
        int cn=0;
            
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cn++;
            }
            else if(nums[i]==0)
            {
                cn--;
            }
            if(cn==0)
            {
                maxi=max(i+1 , maxi);
            }
            else if(mp.find(cn)!=mp.end())
            {
                 
                int le=i-mp[cn];
                maxi=max(maxi,le);
            }
            else
            {
                mp[cn]=i;
            }
        }
        
        return maxi;
    }
};