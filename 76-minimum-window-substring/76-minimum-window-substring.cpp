class Solution {
public:
    
/*
    simple sliding window approach is used with unordered_map
    
    one counter is made of size map which will check when the length
    of window is becoming like map length
        
*/
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
                        
                        // if that element is occured in mao then it should be 0
                        // since we have not erased it from map so it should have count
                        // of that character 
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