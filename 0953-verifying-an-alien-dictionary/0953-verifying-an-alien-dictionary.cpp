class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,char>mp;
        for(int i=0;i<=26;i++)
        {
            mp[order[i]]='a'+i;
        }
        for(auto &x:words)
        {
            for(int i=0;i<x.size();i++)
            {
                x[i]=mp[x[i]];
            }
        }
        return is_sorted(words.begin(),words.end());
    }
};