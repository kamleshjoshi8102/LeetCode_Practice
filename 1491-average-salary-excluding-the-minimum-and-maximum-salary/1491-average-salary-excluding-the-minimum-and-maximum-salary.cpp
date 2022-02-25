class Solution {
public:
    double average(vector<int>& salary) {
        double su=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto x:salary)
        {
            su+=x;
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        
        // cout<<su<<endl;
        su-=maxi;
        su-=mini;
        su=su/(salary.size()-2);
        
        
        return su;
    }
};