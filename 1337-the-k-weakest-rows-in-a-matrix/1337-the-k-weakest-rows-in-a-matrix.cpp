class Solution {
    static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
        {
            return (a.second < b.second);
        }
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int>mp;
        vector<int>ans(k);
        int n=mat[0].size();
        for(int i=0;i<mat.size();i++)
        {
            mat[i].push_back(i);
        }
        sort(mat.begin(),mat.end());
        for(int i=0;i<k;i++)
        {
            ans[i]=mat[i][n];
        }        
        return ans;
        
    }
};