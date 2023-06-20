class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        while(1)
        {
            mp[n]++;
            long long su=0;
            while(n>0)
            {
                su+=(n%10)*(n%10);
                n=n/10;
            }
            
            // cout<<su<<" "<<endl; 
            
            n=su;
            if(su==1)
            {
                return true;
            }
            if(mp.find(su)!=mp.end())
            {
                return false;
            }
        }
        return false;
    }
};