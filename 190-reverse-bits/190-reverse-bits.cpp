class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>t(n);
        // reverse(t,t+t.size());
        uint32_t ans=0;
        long long cn=0;
        for(int i=t.size()-1;i>=0;i--)
        {
            if(t[i]==1)
            {
                ans=ans+pow(2,cn);
            }
            cn++;
        }
        return ans;
    }
};