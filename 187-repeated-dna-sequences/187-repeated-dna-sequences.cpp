class Solution {
public:
    
    // simple we have to check if any sequence is occuring twice in 
    // the gap of 10 - 10 element 
    // we can use sliding window approach 
    
    vector<string> findRepeatedDnaSequences(string s) {
        
        int n=s.size();
        int i=0;
        int j=0;
        vector<string> v; // answer to return
        unordered_map<string,int>mp; // to store count of elements
        
        
        while(j<n)
        {
            if(j-i+1 < 10)
            {
                j++;
            }
            else
            {
                string temp=s.substr(i,j-i+1);
                // cout<<temp<<endl;
                mp[temp]++;
                i++;
                j++;
            }
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                v.push_back(x.first);
            }
        }
        
        return v;
    }
};