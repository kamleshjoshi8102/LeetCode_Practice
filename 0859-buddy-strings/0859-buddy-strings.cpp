class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int fir=0,sec=0, ctr=0;
        vector<int>temp;
        
        if(s.size()!=goal.size())
        {return false;}
        
        set<char>se;
        
        if(s==goal)
        {        
            for(int i=0;i<s.size();i++)
            {
                if(se.find(s[i])!=se.end())
                {
                    return true;
                }
                se.insert(s[i]);
            }
            return false;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                temp.push_back(i);
            }
        }
        
        if(temp.size()==2 and (s[temp[1]]==goal[temp[0]] and s[temp[0]]==goal[temp[1]]))
        {
            return true;
        }
        return false;
    }
};