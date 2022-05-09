class Solution {
public:
    bool isPalindrome(string s) {
        string check="";
        
        for(auto x:s)
        {
            if((x>='a' and x<='z') || (x>='A' and x<='Z') || (x>='0' and x<='9'))
            {
                check+=tolower(x);
            }
        } 
       string check2=check;
        
        reverse(check2.begin(),check2.end());
        
        return (check==check2);
         
        
    }
};