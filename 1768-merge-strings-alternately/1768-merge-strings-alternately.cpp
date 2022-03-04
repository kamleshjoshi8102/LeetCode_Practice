class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int i=0,j=0;
        int n=word1.size();
        int m=word2.size();
        
        while(i<n || j<m)
        {
            if(i<n)
            {
                res+=word1[i];
                i++;
            }
            if(j<m)
            {
                res+=word2[j];
                j++;
            }
        }
        return res;
        
    }
};