// O(n*n*26)

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>se;
        bool ispresent=false;
        for(auto x:wordList)
        {
            if(x==endWord)
            {
                ispresent=true;
            }
            se.insert(x);
        }
        
        // if that endword is not present in out wordlist array
        
        if(ispresent==false)
        {
            return 0;
        }
            
        queue<string>q;
        q.push(beginWord); // to start from start we need starting word
        int depth=0;
        
        while(!q.empty())
        {
            depth+=1;
                
            int lsize=q.size();
            
            // checking for aall possible lsize 
            
            while(lsize--)
            {
                string curr=q.front();
                q.pop();
                
                for(int i=0;i<curr.length();i++)
                { // for all combination of a single char change
                    for(char c='a';c<='z';c++)
                    {
                        string temp=curr;
                        temp[i]=c; // changing a particular charachter
                        if(temp==curr)
                        {
                            continue;
                        }
                        if(temp==endWord)
                        {
                            return depth+1;
                        }
                        if(se.find(temp)!=se.end())
                        {
                            q.push(temp);
                            se.erase(temp); // erased from set
                        }
                    }
                        
                }
                
            }
            
        }
        return 0;
        
        
    }
};




