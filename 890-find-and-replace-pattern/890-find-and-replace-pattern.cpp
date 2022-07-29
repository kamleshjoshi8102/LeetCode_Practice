class Solution {
public:
    
    
    // this helper function will help us to map every char to an index
    // suppose if char repeats in any string then we will put the same index in vector
    // I have used vector but string can also do the same job but there conversion to to_String will take a little time
    
    
    
    vector<int> helper(string s)
    {
        vector<int>v;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end()) // if already present in the map we will simply push its previous index into vector
            {
                v.push_back(mp[s[i]]);
            }
            else // if not present then push current index and then map that index to current char value
            {
                v.push_back(i);
                mp[s[i]]=i;
            }
        }
        return v;
    }
    
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();
        vector<string>v;
        
        vector<int>check;
        
        check=helper(pattern); // check it's pattern through helper function
        
        // cout<<check<<endl;
        
        
        for(int i=0;i<n;i++)
        {
            vector<int>temp=helper(words[i]); // check every words pattern through helper and compare
            
            if(temp==check) // if those 2 vectors are equal then push else don't
            {
                v.push_back(words[i]);
            }
        }
        
        return v;
    }
};