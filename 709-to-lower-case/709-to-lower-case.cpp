class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(auto x:s)
        {
            res+=tolower(x);
        }
        return res;
    }
};