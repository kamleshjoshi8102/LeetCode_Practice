class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        vector<int>ma;
        int mini=INT_MAX;
        
        for(int i=0;i<p.size();i++)
        {
            if(p[i][0]==x || p[i][1]==y)
            {
                int x1=p[i][0];
                int y1=p[i][1];
                mini=min(mini,abs(x-x1)+abs(y-y1));
            }
        }
        
        for(int i=0;i<p.size();i++)
        {
            if(p[i][0]==x || p[i][1]==y)
            {
                int x1=p[i][0];
                int y1=p[i][1];
                int xe= abs(x-x1)+abs(y-y1);
                
                if(xe==mini)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};