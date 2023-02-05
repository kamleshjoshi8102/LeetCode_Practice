class Solution {
public:
    
    
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
            
        int n=s.size(),m=p.size();
        if(n<m)
        {
            return res;
        }
        vector<int>hashp(27,0);
        vector<int>hashs(27,0);
        
        
        for(int i=0;i<p.size();i++)
        {
            hashp[p[i]-'a']++;
        }
        
        int i=0,j=0;
        
        while(j<m)
        {
            hashs[s[j]-'a']++;
            j++;
        }
        
        // for(auto x:hashs)
        // {
        //     cout<<x<<' ';
        // }
        
        while(j<s.size())
        {
            if(hashp==hashs)
            {
                res.push_back(i);
            }
            hashs[s[i]-'a']--;
            hashs[s[j]-'a']++;
            i++;
            j++;
        }
        if(hashp==hashs)
            {
                res.push_back(i);
            }
        return res;   
        
    }
};