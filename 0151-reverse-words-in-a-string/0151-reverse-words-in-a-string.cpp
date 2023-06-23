class Solution {
public:
    string reverseWords(string s) {
        
        string res="", temp="";
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(temp.size()>0)
                {
                    reverse(temp.begin(),temp.end());
                    res+=temp;
                    res+=" ";
                    temp="";
                }
            }
            else
            {
                temp+=s[i];
                
            }
        }
        if(temp.size()>0)
        {
            reverse(temp.begin(),temp.end());
                res+=temp;
        }
        
        while(res[res.size()-1]==' ')
        {
            res.pop_back();
        }
        
        
        return res;
        
    }
};