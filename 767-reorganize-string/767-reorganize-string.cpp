class Solution {
public:
// using priority queue here
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        string ans="";
        if(pq.size()==1){return ans;}
        while(pq.size()>1)
        {
            auto fir=pq.top();
            pq.pop();
            ans+=fir.second;
            
            auto sec=pq.top();
            pq.pop();
            
            // adding to string here
            ans+=sec.second;
            
            if(fir.first>1)
            {
                pq.push({fir.first-1,fir.second});
            }
            if(sec.first>1)
            {
                pq.push({sec.first-1,sec.second});
            }      
        }
        cout<<ans<<endl;
        
        if(pq.size() == 1  and pq.top().first == 1)
        {ans+=pq.top().second;}
        if(pq.size() == 1 and pq.top().first > 1) return "";
        return ans;

    }
};