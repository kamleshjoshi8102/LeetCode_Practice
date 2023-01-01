class Solution {
public:
    bool wordPattern(string pattern, string s) {
  
        string s3="";
        vector<string>v;
        s+=' ';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' )
            {
                v.push_back(s3);
                s3="";
            }
            else
            {
                s3+=s[i];
            }
        }

        
        if(v.size()!=pattern.length())
        {
            return false;
        }
         
        map<char,string>mp;
   
        set<string>ch;
        
        for(int i=0;i<pattern.size();i++)
        {
            // 1.   if it's not in  both
            // 2.   if it's in another and came again
            // 3.   if it's present and isn't equal to previous one then
            
            if(mp.count(pattern[i])==0 && ch.count(v[i])==0)
            {
                mp[pattern[i]]=v[i];
                ch.insert(v[i]);
            }
            else if(mp.count(pattern[i])==0 && ch.count(v[i])!=0)
            {
                return false;
            }
            else if(mp[pattern[i]]!=v[i])
            {
                return false;
            }
        }
        return true;
    }
};