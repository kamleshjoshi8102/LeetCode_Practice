class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        map<string,int>mp;
        
        for(auto x:wordList)
        {
            mp[x]++;
        }

        int cn = 0;
        
        map<string,int>dup;
        
        queue<pair<string,int>>pq;
        pq.push({beginWord,cn});
        
        while(pq.size()>0)
        {
            
            string temp = pq.front().first;
            cn = pq.front().second;
            pq.pop();
            
            if(temp==endWord and mp[temp]>0)
            {
                return cn+1;
            }
            
            for(int i=0;i<temp.size();i++)
            {
                string t = temp;
            
                for(char j='a';j<='z';j++)
                {
                    t[i]=j;
                    // cout<<t<<endl;
                    if(mp.find(t)!=mp.end() and dup.find(t)==dup.end())
                    {
                        pq.push({t,cn+1});
                        dup[t]++;
                    }
                    
                }
            }
            
        }
        return 0;
    }
};