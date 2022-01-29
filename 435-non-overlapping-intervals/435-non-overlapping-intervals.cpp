class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int cn=0;
        sort(in.begin(),in.end());
        int fir=in[0][0];
        int sec=in[0][1];
        for(int i=1;i<in.size();i++)
        {
            if(in[i][0]<sec)
            {
                sec=min(sec,in[i][1]);
                cn++;
            }
            else
            {
               sec=in[i][1];
            }
        }
        return cn;
    }
};