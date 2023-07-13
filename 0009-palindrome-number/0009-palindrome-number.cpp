class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int temp = x;
        long long check=0;
        
        while(temp>0)
        {
            long long rem = temp%10;
            check=(check*10)+(rem);
            temp=temp/10;
        }
        
        // cout<<check<<x<<endl;
        
        return (check==x);
    }
};