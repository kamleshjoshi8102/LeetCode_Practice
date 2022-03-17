class Solution {
public:
    string freqAlphabets(string s) {
        int  n =s.size();
        string ans = "";
        for(int i = 0; i<n;i++)
        {
            if(i+2 <n&&s[i+2] =='#')
            {
                char c = (s[i] -'0')*10 +(s[i+1] -'0');
                ans+='a' + c -1;
                i+=2; 
            }
            else{
                char c = (s[i] -'0');
                ans+='a' + c -1;
                
            }
        }
        return ans;
        
    }
};