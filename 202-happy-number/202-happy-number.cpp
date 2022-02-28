class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(n>1)
        {
            string s=to_string(n);
            int su=0;
            for(auto x:s)
            {
                su+=(x-'0')*(x-'0');
            }
            n=su;
            if(mp[n]>1)
            {
                return false;
            }
            mp[n]++;            
        }
        return (n==1);
    }
};