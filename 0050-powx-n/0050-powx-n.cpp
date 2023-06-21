class Solution {
public:
    double myPow(double x, int n) {
        double res= 1.0;
        long long temp=n;
        temp = temp<0?temp*-1:temp;
        
        while(temp)
        {
            if(temp%2)
            {
                res=res*x;
                temp-=1;
            }
            else
            {
                x=x*x;
                temp=temp/2;
            }
        }
        if(n<0)
        {
            return (double)1.0/(double)res;
        }
        return res;
        
    }
};