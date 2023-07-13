class Solution {
public:
    int reverse(int x) {
        bool check=false;
        int ans=0;
        while(x)
        {
            long long temp = x%10;
            
            if((ans>INT_MAX/10 or (temp>7 and ans==INT_MAX/10)) or (ans<INT_MIN/10 or (temp>8 and ans==INT_MIN/10)))
            {
                return 0;
            }
            
            ans = (ans*10)+temp;
            
            
            
            x=x/10;
        }
        
        return ans;
    }
};