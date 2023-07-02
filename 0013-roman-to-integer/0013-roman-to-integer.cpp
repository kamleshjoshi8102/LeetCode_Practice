class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1)
            {
                if(s[i]=='I' and s[i+1]=='V')
                {
                    res+=4;
                    i++;
                }
                else if(s[i]=='I' and s[i+1]=='X')
                {
                    res+=9;
                    i++;
                }
                else if(s[i]=='X' and s[i+1]=='L')
                {
                    res+=40;
                    i++;
                }
                else if(s[i]=='X' and s[i+1]=='C')
                {
                    res+=90;
                    i++;
                }
                else if(s[i]=='C' and s[i+1]=='D')
                {
                    res+=400;
                    i++;
                }
                else if(s[i]=='C' and s[i+1]=='M')
                {
                    res+=900;
                    i++;
                }
                else
                {
                    res+=mp[s[i]];
                }
            }
            else
            {
                res+=mp[s[i]];
            }
        }
        return res;
        
    }
};