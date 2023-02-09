class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long names_distinct = 0;
        vector<unordered_set<string>> vs(26);
        for (string s : ideas) 
            vs[s[0] - 'a'].insert(s.substr(1));
        
        for (int i = 0; i < 25; i++) {
            for (int j = i + 1; j < 26; j++) {
                unordered_set<string> se;
                
                se.insert(vs[i].begin(), vs[i].end());
                se.insert(vs[j].begin(), vs[j].end());
                
                int temp = 0;
                
                temp= (vs[i].size() - se.size()) * (vs[j].size() - se.size());
                
                names_distinct += temp;
                
            }
        }
        return names_distinct * 2;
    }
};