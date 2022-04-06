#define ll long long 
class Solution {
public:
    ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}

    int threeSumMulti(vector<int>& arr, int target) {
        ll cn=0;
        unordered_map<ll,ll>mp;
        
        for(auto x:arr)
        {
            mp[x]++;
        }
        // int n=arr.size();
        
    // 3 cases
        /*
            1. if all are equal
            2. if 2 are equal 
            3. if all are not equal
        */
        for(auto x:mp)
        {
            for(auto y:mp)
            {
                int i=x.first;
                int j=y.first;
                int k=target-i-j;
                
               if(mp.find(k)==mp.end())
               {
                   continue;
               }
                    if(i==j and j==k)
                    {
                        ll n=mp[i];
                        cn+=((n)*(n-1)*(n-2))/6;                        
                    }
                    else if(i==j and j!=k)
                    {
                        ll n=mp[i];
                        cn+=((n)*(n-1)/2) * mp[k];
                    }
                    else if(i<j and j<k)
                    {
                        cn+=mp[i]*mp[j]*mp[k];
                    }
        
            }
        }
        // return cn;
        return cn% int(1e9+7);
        
    }
};