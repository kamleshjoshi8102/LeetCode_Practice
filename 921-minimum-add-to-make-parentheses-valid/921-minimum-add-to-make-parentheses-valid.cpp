class Solution {
public:
    int minAddToMakeValid(string s) {
        int cn=0,o=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cn++;
            }
            else
            { 
                if(cn<=0)
                {
                    c++;
                }
                else
                {
                    cn--;
                }
            }
        }
        return abs(cn+c);
    }
};