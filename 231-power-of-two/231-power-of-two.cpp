class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long ans=1;
        while(ans*2<=n)
        {
            ans*=2;
        }
        if(ans==n)
        {
            return true;
        }
        return false;
    }
};