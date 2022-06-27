class Solution {
public:
    
    
    // just find maximum why? since we can add 1 upto that only\
    
    int minPartitions(string n) {
        vector<int>v;
        int maxi=0;
        for(int i=0;i<n.size();i++)
        {
            v.push_back(n[i]-'0');
            maxi=max(maxi,v[i]);
        }
        
        
        return maxi;
        
    }
};