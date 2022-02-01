class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        set<char>se;
        vector<int>res;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int cn=0;
        // for(auto c:mp)
        // {
        //     cout<<c.first<<' '<<c.second<<endl;
        // }
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]--;
            cn++;
            if(mp[s[i]]<=0)
            {
                se.erase(s[i]);
            }
            if(mp[s[i]]>=1)
            {
                se.insert(s[i]);
            }
            if(se.size()==0 && mp[s[i]]<=0)
            {
                res.push_back(cn);
                cn=0;
            }
        }
        return res;
        // "ababcbacadefegdehijhklij"
    }
};