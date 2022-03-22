class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        
        k=k-n;
        
        if(k==0)
        {
            return s;
        }
        
        int i=s.size()-1;
        
        
        while(k>0)
        {
            k++;
            if(k<=26)
            {
                char c='a'+(k-1);
                // cout<<c<<' ';
                s[i]=c;
                return s;
            }
            else
            {
                s[i]='z';
                k=k-26;
            }
            i--;
        }
        return s;
    }
};