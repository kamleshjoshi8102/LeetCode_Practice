class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>v(27,0);
        for(auto x:t)
        {
            v[x-'a']++;
        }
        for(auto x:s)
        {
            v[x-'a']--;
        }
        for(int i=0;i<27;i++)
        {
            if(v[i]>0)
            {
                return 'a'+i;
            }
        }
        return 'a';
    }
};