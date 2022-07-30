class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>res;
        vector<int>freq(26,0);
        
        for(int i=0;i<words2.size();i++)
        {
            vector<int>temp(26,0);
            
                for(int j=0;j<words2[i].size();j++)
                {
                    char x=words2[i][j];
                    temp[x-'a']++;
                    freq[x-'a']=max(freq[x-'a'],temp[words2[i][j]-'a']);
                }
        }
        // now I have all frequeny of elements in  words2
        // and now check all freq of words1
        
        
        for(int i=0;i<words1.size();i++)
        {
            vector<int>temp(26,0);
            string s=words1[i];
            
            for(int j=0;j<s.size();j++)
            {
                temp[s[j]-'a']++;
            }
            
            bool check=true;
            
            for(int i=0;i<26;i++)
            {
                if(freq[i]>temp[i])
                {
                    // cout<<words1[i]<<" "<<freq[i]<<" "<<temp[i]<<endl;
                    check=false;break;
                }
            }
            
            if(check==true)
            {
                // cout<<words1[i]<<" ";
                res.push_back(words1[i]);
            }
            
        }
        
        
        return res;
    }
};