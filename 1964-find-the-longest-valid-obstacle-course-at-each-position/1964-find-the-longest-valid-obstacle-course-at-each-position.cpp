class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obs) {
        
        vector<int> v(obs.size(),(int)1e9), res;
        
        for(int x: obs){
            auto temp = upper_bound(begin(v), end(v), x);
            res.emplace_back(temp - v.begin() + 1);
            *temp = x;
        }
        
        return res;
    }
};