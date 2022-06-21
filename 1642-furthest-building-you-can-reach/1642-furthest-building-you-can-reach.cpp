class Solution {
public:
    
    /*
        using priority queue to store recent difference i.e, bricks which we needed to subtract why?
        
        since in place of those max bricks we could use ladders if we have any else we break and return counter till now!.
    
    */
    
    int furthestBuilding(vector<int>& height, int bricks, int ladders) {
       priority_queue<int>pq;
        
        // int bricks=0;
        int ctr=0;
        for( int i=1;i<height.size();i++)
        {
            int diff=height[i]-height[i-1];
            if(diff<=0) {ctr++;continue;}
            
            bricks-=diff;
            pq.push(diff);
            
            if(bricks<0)
            {
                    bricks+=pq.top();
                    pq.pop();
                    ladders--;
            }
            if(ladders<0)
            {
                break;
            }
            ctr++;
        }
        return ctr;       
    }
};