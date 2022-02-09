class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        set<pair<int,int>>se;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            int check=nums[i]+k;
            if(mp[nums[i]+k]>0 and check!=nums[i])
            {
                se.insert({nums[i],nums[i]+k});
            }
            else if(check==nums[i] and mp[nums[i]]>1)
            {
                se.insert({nums[i],mp[nums[i]+k]});
            }
        }
        
        return se.size();
    }
};