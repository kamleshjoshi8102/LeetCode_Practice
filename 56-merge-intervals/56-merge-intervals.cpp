class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int fir=intervals[0][0];
        int sec=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++)
        {
            int f=intervals[i][0];
            int s=intervals[i][1];
            
            if(f<=sec)
            {
                f=min(f,fir);
                sec=max(sec,s);
            }
            else
            {
                res.push_back({fir,sec});
                fir=f;
                sec=s;
            }
        }
        
        res.push_back({fir,sec});
        return res;
    }
};