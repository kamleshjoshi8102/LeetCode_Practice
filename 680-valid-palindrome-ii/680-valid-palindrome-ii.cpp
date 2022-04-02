class Solution {
    private:
    
    bool ispalin(string s)
    {
        int n=s.size();
        
        for(int i=0;i<=s.size()/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
        
    }
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,h=n-1;
        
        while(l<=h)
        {
            if(s[l]==s[h])
            {
                l++;
                h--;
            }
            else 
            {
                    string s1=s.substr(0,l)+s.substr(l+1);
                    string s2=s.substr(0,h)+s.substr(h+1);
                
                    return (ispalin(s1)||ispalin(s2));
            }        
        }
        return true;
        
    }
};