class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mp;
        vector<int>res;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            bitset<32>t(arr[i]);
            int get=t.count();
            mp[get].push_back(arr[i]);
        }
        for(auto x:mp)
        {
            sort(x.second.begin(),x.second.end());
            for(auto y:x.second)
            {
                res.push_back(y);
            }
        }
        return res;
        
    }
};