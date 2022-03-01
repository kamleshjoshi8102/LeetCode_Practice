class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            bitset<32>t(i);
            v.push_back(t.count());
        }
        return v;
    }
};