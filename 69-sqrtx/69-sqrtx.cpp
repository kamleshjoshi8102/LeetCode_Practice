class Solution {
public:
    int mySqrt(int x) {
        int hi=x,lo=1;
            
        while(lo<=hi)
        {
            long long int mid=lo+(hi-lo)/2;
            if(mid*mid>x)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return hi;        
    }
};