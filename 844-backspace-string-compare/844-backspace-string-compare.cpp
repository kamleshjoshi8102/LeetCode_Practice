class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",s2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && s1.size()>0)
            {
                s1.pop_back();
                // cout<<s1<<endl;  
            }                
            else if(s[i]!='#')
            {
                s1+=s[i];
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && s2.size()>0)
            {
                s2.pop_back();
                // cout<<s1<<endl;  
            }                
            else if(t[i]!='#')
            {
                s2+=t[i];
            }
        } 
        
        // cout<<s1<<' '<<s2<<endl;
      
        return s1==s2;
    }
};