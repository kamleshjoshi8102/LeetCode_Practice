class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ch(26,0);
        vector<int>ch1(26,0);
        for(auto x:s)
        {
            ch[x-'a']++;
        }
        for(auto x:t)
        {
            ch1[x-'a']++;
        }
        return ch==ch1;
    }
};