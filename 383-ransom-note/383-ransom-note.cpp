class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(27,0);
        for(auto x:ransomNote)
        {
            v[x-'a']++;
        }
        
        for(auto x:magazine)
        {
            v[x-'a']--;
        }
        for(auto x:v)
        {
            if(x>0)
            {
                return false;
            }
        }
        return true;
        
    }
};