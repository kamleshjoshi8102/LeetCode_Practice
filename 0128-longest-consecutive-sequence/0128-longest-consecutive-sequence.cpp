class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> mp(nums.begin(), nums.end());
        int maxi = 0,n=nums.size();
        
        for(auto x:nums)
        {
            int num = x;
            int cn=1;
             if (mp.find(num - 1) == mp.end()) {
            while(mp.find(num+1)!=mp.end())
            {
                num+=1;
                cn++;
            }
            maxi = max(maxi , cn);
             }
        }
        return maxi;
        
    }
};