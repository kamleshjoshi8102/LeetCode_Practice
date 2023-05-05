class Solution {
public:
    inline bool isvowel(char c)
    {
        return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
    }
    int maxVowels(string s, int k) {
        int i = 0, j = 0 , maxi = 0 , cn = 0;
        int n = s.size();
            
        while(i<n)
        {
            if(isvowel(s[i])==true)
            {
                cn++;
            }
            if(i-j+1==k)
            {
                
            maxi=max(maxi,cn);
                if(isvowel(s[j])==true)
                {
                    cn--;
                }
                j++;             
            }
            
            i++;
        }
        return maxi;
        
    }
};