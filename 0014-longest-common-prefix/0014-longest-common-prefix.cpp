class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
        {
            return "";
        }
        
        string res = "";
        
        int cn = INT_MAX;
        
        string check = strs[0];
        
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            
            while(j<strs[i].size() and strs[i][j]==check[j])
            {
                j++;
            }
            cn = min(cn,j);
            
        }
         
        return strs[0].substr(0,cn);
    }
};