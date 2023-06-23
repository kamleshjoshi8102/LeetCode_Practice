class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones)
        {
            pq.push(x);
        }
        while(pq.size()>1)
        {
            int fir = pq.top();pq.pop();
            int sec = pq.top();pq.pop();
            
            if(fir==sec)
            {
                continue;
            }
            else
            {
                pq.push(abs(fir-sec));
            }
        }
        return (pq.size()>0?pq.top():0);
    }
};