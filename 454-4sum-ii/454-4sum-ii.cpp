class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp;
        for(auto x:nums4)
        {
             for(auto y:nums3)
             {
                 mp[x+y]++;
             }
        }
        int cn=0;
        
        for(auto x:nums1)
        {
            for(auto y:nums2)
            {
                 int get=x+y;
                get=-1*get;
                if(mp[get]>0)
                {
                    cn+=mp[get];
                }
            }
        }
        return cn;
        
    }
};