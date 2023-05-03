class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        set<int>se1;
        set<int>se2;
        for(auto x:nums1)
        {
            se1.insert(x);
            mp1[x]++;
        }
        for(auto x:nums2)
        {
            se2.insert(x);
            mp2[x]++;
        }
        vector<vector<int>>ans(2);
        
        for(auto x:se1)
        {
            if(mp2[x]>=1)
            {
                continue;
            }
            else 
            {
                ans[0].push_back(x);
            }
        }
        for(auto x:se2)
        {
            if(mp1[x]>=1)
            {
                continue;
            }
            else 
            {
                ans[1].push_back(x);
            }
                 
        }
        
        return ans;
    
    }
};