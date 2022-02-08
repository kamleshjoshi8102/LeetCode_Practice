class Solution {
public:
    string reverseWords(string s) {
      s+=" ";
        string ne="";
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(ne.begin(),ne.end());
                res+=ne;
                res+=' ';
                ne="";
            }
            else
            {
                ne+=s[i];
            }
        }
        res.pop_back();
        
        
        return res;
        
    }
};