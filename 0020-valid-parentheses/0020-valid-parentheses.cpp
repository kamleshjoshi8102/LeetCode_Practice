class Solution {
public:
    bool isValid(string s) {
        stack<char>se;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                se.push(s[i]);
            }
            else if(s[i]==')' and se.size()>0 and se.top()=='(')
            {
                se.pop();
            }
            else if(s[i]=='}' and se.size()>0 and se.top()=='{')
            {
                se.pop();
            }
            else if(s[i]==']' and se.size()>0 and se.top()=='[')
            {
                se.pop();
            }
            else
            {
                return false;
            }
        }
        if(se.size()==0)
            return true;
        
        return false;
    }
};