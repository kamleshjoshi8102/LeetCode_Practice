class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<char,vector<int>>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);        
        }
        
        int res=0;
        
        for(int i=0;i<words.size();i++)
        {
             
            string str=words[i];
            int st=-1;
            
            for(int j=0;j<str.size();j++)
            {
                auto it=upper_bound(mp[str[j]].begin(),mp[str[j]].end(),st);
                
                
                if(it==mp[str[j]].end())
                {
                    break;
                }
                
                st=*it;
                
                if(j==str.size()-1)
                {
                    res++;
                }
                
            }
            
        }
    return res;
        
    }
};