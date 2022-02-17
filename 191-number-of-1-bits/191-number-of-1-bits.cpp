class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cn=0; 
        bitset<64>t(n);
        return t.count();
        // return cn;
    }
};