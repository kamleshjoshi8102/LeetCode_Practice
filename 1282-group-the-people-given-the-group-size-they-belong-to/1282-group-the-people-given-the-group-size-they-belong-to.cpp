class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mp;
        for(int i=0;i<groupSizes.size();i++)
        {
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>res;
        
        for(auto x:mp)
        {
            int ele=x.first;
            vector<int>get=x.second;
            vector<int>ne;
            
            for(int i=0;i<get.size();i++)
            {
                if((i)%ele==0 and i!=0)
                {
                    res.push_back(ne);
                    ne.clear();
                    ne.push_back(get[i]);
                }
                else
                {
                    ne.push_back(get[i]);
                }
            }
            if(ne.size()>0)
            {
                res.push_back(ne);
            }
            
            
        
        }
        
        return res;
        
        
    }
};