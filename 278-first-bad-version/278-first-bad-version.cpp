// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long bsearch(int n )
    {
        long long hi=n;
        long long lo=1;
        long long ans=-1;
        while(lo<=hi)
        {
            long long mid=(lo+hi)/2;
            if(isBadVersion(mid)==true)
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
    int firstBadVersion(int n) {
        return bsearch(n);
    }
};