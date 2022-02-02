class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        for(auto x:strs)
        {
            string s=x;
            sort(s.begin(),s.end());
            mp[s].push_back(x);
        }
        
        
        for(auto x:mp)
        {
            vector<string>re;
            for(auto y:x.second)
            {
                re.push_back(y);
            }
            v.push_back(re);
        }
        
        return v;
    }
};