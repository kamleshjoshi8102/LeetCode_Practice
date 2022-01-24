class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return 0;
        }
         sort(nums.begin(),nums.end());
        
         map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
            
        }
        if(nums[0]==nums[nums.size()-1])
        {
            return 0;
        }
        return nums.size()-(mp[nums[0]]+mp[nums[nums.size()-1]]);
        
    }
};