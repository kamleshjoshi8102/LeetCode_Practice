class Solution {
public:
    bool check(long long int row,long long int nu)
    {
        long long int c=(long long int)(row*(row+1) )/2;
        return c<=nu;   
    }
    int arrangeCoins(int n) {
        if(n==1)
        {
            return 1;
        }
        long long int lo=1,hi=65536;
        int mini=0;
        while(lo<=hi)
        {
            int mid=lo +(hi-lo)/2;
            if(check(mid,n)==true)
            {
                mini=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return mini;
    }
};