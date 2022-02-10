class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int>v1(27,0);
        vector<int>v2(27,0);
        
        for(auto x:s1)
        {
            v1[x-'a']++;
        }
        
        int i=0,j=0,n=s1.size(),m=s2.size();
        while(i<m)
        {
            v2[s2[i]-'a']++;
            while(i-j+1>n)
            {
                v2[s2[j]-'a']--;
                j++;
            }
            if(v2==v1)
            {
                return true;
            }
            // cout<<i<<' '<<j<<endl; 
            i++;
        }
        
        return false;
    
    }
};