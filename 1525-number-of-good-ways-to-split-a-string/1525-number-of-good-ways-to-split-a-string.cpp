class Solution {
public:
    int numSplits(string s) {
           
     bitset<26>b;
    vector<int>v(s.size());
     for(int i=0;i<s.size();i++)
     {
         b[s[i]-'a']=1;
         v[i]=b.count();
     }
     int cn=0;
     b.reset();
     for(int i=s.size()-1;i>=0;i--)
        {
            if(v[i]==b.count())
            {
                cn++;
            }
            b[s[i]-'a']=1;
            
        }
        return cn;
    
        
    }
};