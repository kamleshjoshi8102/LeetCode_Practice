class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto x:nums1)
        {
            mp[x]++;
        }
        vector<int>v;
        for(auto x:nums2)
        {
            if(mp[x]>=1)
            {
                v.push_back(x);
                mp[x]--;
                if(mp[x]==0)
                {
                    mp.erase(x);
                }
            }
        }
        return v;            
    }
};