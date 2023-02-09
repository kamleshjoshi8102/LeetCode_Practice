class Solution {
public:
    int partitionString(string s) {
        int res=0;
        
        map<char,int>mp;
        set<char>se;
        for(int i=0;i<s.size();i++)
        {
            if(se.find(s[i])==se.end())
            {
                se.insert(s[i]);
            }
            else
            {
                se.clear();
                se.insert(s[i]);
                res++;
            }
        }
        if(se.size()>0)
        {
            res++;
        }
        return res;
        
    }
};