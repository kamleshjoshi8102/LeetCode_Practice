class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.size(),maxi=0;
        unordered_set<char>se;
        while(i<n and j<=i)
        {
            if(se.find(s[i])==se.end())
            {
                se.insert(s[i]);
                i++;
                maxi=max(i-j,maxi);
            }
            else
            {
                se.erase(s[j]);
                j++;
            }
        }
            return maxi;
        
    }
};