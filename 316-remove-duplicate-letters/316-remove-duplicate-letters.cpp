class Solution {
public:

// using stack if greater than poping else pushing
    // monotonic stack use
    
    
    string removeDuplicateLetters(string s) {
       unordered_map<char,int>last_in;
        
        for(int i=0;i<s.size();i++)
        {
            last_in[s[i]]=i;
        }

        
        stack<char>st;
        
        vector<bool>visited(27,false);
        
        for(int i=0;i<s.size();i++)
        {
            if(visited[s[i]-'a']==true)
            {
                continue;
            }
            else
            {
                while(st.size()>0 and st.top() > s[i] and i < last_in[st.top()])
                {
                    visited[st.top()-'a']=false;
                    st.pop();
                }
                visited[s[i]-'a']=true;
                st.push(s[i]);
            }
        }
            
        string res="";
        
        while(st.size()>0)
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
 