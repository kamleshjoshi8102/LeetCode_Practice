class Solution {
public:
    bool isPerfectSquare(int num) {
        long hi=num,lo=0;
        
        while(lo<=hi)
        {
            long mid = lo + (hi-lo)/2;
            if(mid*mid==num)
            {
                return true;
            }
            if(mid*mid>num)
            {
                hi=mid-1;
            }
            else if(mid*mid<num)
            {
                lo=mid+1;
            }
        }
        if(lo*lo==num)
        {
            return true;
        }
        return false;
 
    }
};