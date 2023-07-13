class Solution {
public:
    int reverse(int x) {
        bool check=false;
        // if(x<0)
        // {
        //    check=true;
        //     x=x*(-1);
        // }
        long long ans=0;
        while(x)
        {
            long long temp = x%10;
            ans = (ans*10)+temp;
            
            if(ans<=INT_MIN or ans>=INT_MAX-1){
                return 0;
            }
            
            x=x/10;
        }
        // return (check==true)?(ans*-1):ans;
        return ans;
    }
};