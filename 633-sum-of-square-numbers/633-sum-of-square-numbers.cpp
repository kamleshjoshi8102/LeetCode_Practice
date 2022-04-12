class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0;
    long long high=sqrt(c);
    while(low<=high)
    {
        long long sar = low*low + high*high;
        if (sar == c)
        {
            return true;
        }
        else if (sar > c)
        {
            high-=1;
        }
        else
        {
            low+=1;
        }
    }
    return false;
        
    }
};