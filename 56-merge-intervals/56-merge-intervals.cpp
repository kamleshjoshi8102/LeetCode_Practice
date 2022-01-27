class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>res;
        
        sort(intervals.begin(),intervals.end());
        
        int prefir=intervals[0][0];
        int presec=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++)
        {
            int fir=intervals[i][0];
            int sec=intervals[i][1];
            if(presec>=fir)
            {
                presec=max(presec,sec);        
            }
            else
            {
                vector<int>v;
                v.push_back(prefir);
                v.push_back(presec);
                res.push_back(v);
                
                // assigning them values
                
                presec=sec;
                prefir=fir;
            }
         }
                vector<int>v;
                v.push_back(prefir);
                v.push_back(presec);
                res.push_back(v);
                
        return res;
    }
};