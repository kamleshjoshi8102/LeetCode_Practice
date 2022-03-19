class NumArray {
public:
    vector<int>prefix;
    NumArray(vector<int>& nums) {
        int su=0;
        for(auto x:nums)
        {
            su+=x;
            prefix.push_back(su);
        }
    }
    
    int sumRange(int l, int r) {
        if(l==0)
        {
            return prefix[r];
        }
        return prefix[r]-prefix[l-1];
        return 2;
    }
};
// -2 -2 1 -4 -2 -3
//  0  1 2  3  4  5

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */