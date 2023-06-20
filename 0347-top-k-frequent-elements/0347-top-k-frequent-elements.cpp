class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        set<int>s;
        for(auto x:nums){
            mp[x]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        
        for(auto x:mp)
        {
            bucket[x.second].push_back(x.first);
        }
        for(int i=bucket.size()-1;i>=0;i--)
        {
            for(int j=0;j<bucket[i].size();j++)
            {
                if(res.size()<k)
                {
                    res.push_back(bucket[i][j]);
                }
            }
        }
        
        
        return res;
    }
};