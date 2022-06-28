class Solution {
public:
    int minDeletions(string s) {
        map<int,int>mp;
        map<int,int>freq_cnt;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            freq_cnt[x.first]=x.second;
        }
            
        set<int>se;
        int cn=0;
        
        for(auto x:freq_cnt)
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