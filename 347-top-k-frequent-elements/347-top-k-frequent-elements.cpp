class Solution {
public:
     
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int>mp;
            int n=nums.size();
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        vector<vector<int>>bucket_array(n+1);
        
        for(auto x:mp)
        {
            bucket_array[x.second].push_back(x.first);    
        }
        
  
        
        vector<int>res;
        
        for(int i=n;i>=0;i--)
        {
            vector<int>v=bucket_array[i];
      
            for(int j=0;j<v.size();j++)
            {
                if(res.size()<k)
                {
                    res.push_back(v[j]);
                }
            }
            if(res.size()==k)
            {
                return res;
            }
        }
        return res;        
    }
};