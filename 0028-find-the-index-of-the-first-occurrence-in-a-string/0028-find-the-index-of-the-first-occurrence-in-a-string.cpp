class Solution {
public:
    int strStr(string haystack, string needle) {
        int res=-1;
        int n= haystack.size();
        if(haystack==needle)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(needle[0]==haystack[i])
            {
                if(i+needle.size()-1<n)
                {
                    string get = haystack.substr(i,needle.size());
                    // cout<<get<<" ";
                    if(get==needle){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};