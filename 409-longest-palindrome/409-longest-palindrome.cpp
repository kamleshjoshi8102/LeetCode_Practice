class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int cn=0;
        for(auto x:s)
        {
            mp[x]++;
        }
        bool check=false;
        for(auto x:mp)
        {
            if(x.second%2!=0)
            {
                check=true;
            }
            cn+=x.second/2;
        }
        if(check==true)
        {
            return (cn*2)+1;
        }        
        return cn*2;
    }
};