class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        
        int c1=0,c2=0;
        
// first pass to remove extra brackets from start to end 
    // this will only exclude <)> brackets
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c1++;
                res+=s[i];
            }
            else if(s[i]==')')
            {
                if(c1>c2)
                {
                    res+=s[i];
                    c2++;
                }
            }
            else
            {
                res+=s[i];
            }
        }
        c1=0;
        s="";
        
        cout<<res<<endl;
        
        for(int i=0;i<res.size();i++)
        {
            if(res[i]=='(')
            {
                if(c1<c2)
                {
                    s+=res[i];
                    c1++;
                }
            }
            else
            {
                s+=res[i];
            }
        }
        return s;
        
        cout<<c2<<endl;
        
        
        return res;
    
    }
};