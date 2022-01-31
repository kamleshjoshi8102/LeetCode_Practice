class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        map<int,int>mp;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                mp[i]+=accounts[i][j];
            }
        }
        int maxi=0;
        for(auto x:mp)
        {
            maxi=max(maxi,x.second);
        }
        return maxi;
    }
};