class Solution {
public:
    string countAndSay(int n) {
        
        string res="1", prev="";
        
        for(int i=1; i<n; ++i)
        {
            for(int j=0; j<res.size(); ++j)
            {
                int cnt=1;
                
                
                while(j+cnt<res.size() and res[j]==res[j+cnt])
                {
                     ++cnt;
                }
                
                j += (cnt-1);
                
                prev += to_string(cnt);
                prev += res[j];
            
            }
            
            res = prev;
            
            prev = "";
            
        }
        return res;
    }
};