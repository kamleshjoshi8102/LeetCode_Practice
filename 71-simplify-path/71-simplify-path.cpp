class Solution {
public:
    string simplifyPath(string p) {
        stack<string>se;
        
        int n=p.size();
        if(p[n-1]!='/')
        {
            p+='/';
            n++;
        }
        int i=0;
        string temp="";
        
        while(i<n)
        {
            if(p[i]=='/')
            {
                if(temp=="" || temp==".")
                {
                    
                }
                else if(temp=="..")
                {
                    if(se.size()>0)
                    {
                        se.pop();
                    }
                }
                else
                {
                    se.push(temp);
                }
                temp="";
            }
            else
            {
                temp+=p[i];
            }
            ++i;
        }
        stack<string>rev_st; // to reduce complexity to O(n)
        
        while(se.size()>0)
        {
            rev_st.push(se.top());
            se.pop();
        }
        string re="/";
        
        while(rev_st.size()>0)
        {
            re+=rev_st.top()+"/";
            rev_st.pop();
        }
        if(re.size()==1)
        {
            return "/";
        }
        return re.substr(0,re.size()-1);       
        
    }
};