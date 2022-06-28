class Solution {
public:
    int minDeletions(string s) {
        map<int,int>mp;
        
        for(auto x:s)
        {
            mp[x]++;
        }
      
            
        set<int>se;
        int cn=0;
        
        for(auto x:mp)
        {
            while(se.find(x.second)!=se.end() and x.second>0)
            {
                cn++;
                x.second--;
            }
            se.insert(x.second);
        }
        return cn;       
    }
};