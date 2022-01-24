class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>res;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int cn=0;
        for(int i=0;i<nums.size();i++)
        {
            int pre=nums[i]-1;
            int ne=nums[i]+1;
            if(mp[pre]>0 || mp[ne]>0)
            {
                
            }
            else if(mp[nums[i]]==1)
            {
                res.push_back(nums[i]);
            }
        }
        return res;
        
    }
};