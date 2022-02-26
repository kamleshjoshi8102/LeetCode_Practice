class Solution {
public:
    int subtractProductAndSum(int n) {
        long long su=0,pro=1;
        
        string s=to_string(n);
        
        for(auto x:s)
        {
            su+=x-'0';
            pro*=x-'0';
        }
        return pro-su;        
    }
};