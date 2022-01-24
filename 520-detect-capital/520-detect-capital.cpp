class Solution {
public:
    bool isupper(char s)
    {
        if(s>='A' and s<='Z')
        {
            return true;
        }
        return false;
    }
    bool islower(char s)
    {
        if(s>='a' and s<='z')
        {
            return true;
        }
        return false;
    }
    bool detectCapitalUse(string s) {
        if(s.size()<=2)
        {
            if(islower(s[0]) && isupper(s[1]))
            {
                return false;
            }
            return true;
        }
        
        if(isupper(s[0])==true and isupper(s[1])==true)
        {
            for(int i=0;i<s.size();i++)
            {
                if(islower(s[i])==true)
                {
                    return false;
                }
            }
            return true;
        }
        if(isupper(s[0])==true and islower(s[1])==true)
        {
            for(int i=1;i<s.size();i++)
            {
                if(isupper(s[i])==true)
                {
                    return false;
                }
            }
            return true;
        }
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i])==true)
            {
                return false;
            }
        }
        return true;
    }
};