class Solution {
public:
    
    vector<int> change(string s)
    {
        vector<int>v;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                v.push_back(mp[s[i]]);
            }
            else
            {
                v.push_back(i);
                mp[s[i]]=i;
            }
        }
        return v;
    }
    
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();
        vector<string>v;
        
        vector<int>check;
        
        check=change(pattern);
        
        // cout<<check<<endl;
        
        
        for(int i=0;i<n;i++)
        {
            vector<int>temp=change(words[i]);
            
            if(temp==check)
            {
                v.push_back(words[i]);
            }
        }
        
        return v;
    }
};