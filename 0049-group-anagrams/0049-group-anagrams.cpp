class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        for(auto x:strs)
        {
            string s=x;
            sort(s.begin(),s.end());
                
            if(mp.find(s)!=mp.end())
            {
                mp[s].push_back(x);
            }else
            {
                vector<string>temp;
                temp.push_back(x);
                mp[s]=temp;
            }
            
        }
        for(auto x:mp)
        {
            vector<string >te=x.second;
                
            v.push_back(te);
            
        }
        
        return v;
        
    }
};