class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.size()<t.size()){return "";}
        
        unordered_map<char,int>mp;
        for(auto x:t)
        {
            mp[x]++;
        }
        
        int i=0,j=0,n=s.size();
        
        string ans="";
        int cn=mp.size();
        int min_window=INT_MAX-100;
        while(i<n)
        {
            if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    cn--;
                }
                if(cn==0)
                {
                    // cout<<i<<' '<<j<<endl;
                    
                    while(cn==0)
                    {
                        if(min_window>i-j+1)
                        {
                            min_window=i-j+1;
                            ans=s.substr(j,i-j+1);
                        }
                        if(mp.find(s[j])!=mp.end())
                        {
                            mp[s[j]]++;
                            if(mp[s[j]]>0)
                            {
                                cn++;
                            }
                        }
                     j++;
                    }
                }
            }
            i++;
        }
        return  ans;
        
        
        
        // return "";       
    }
};