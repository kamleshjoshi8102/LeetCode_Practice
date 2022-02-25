class Solution {
public:
    int countOdds(int low, int high) {
        int g=high-low+1;
        if(g%2==0)
        {
            return g/2;
        }
        else
        {
            
            // 3 5
            // 2 8
            // 2 7
            // 3 8
            
    /*
        3 8
        3 4 5 6 7 8
        5/2+1
        5 8
        5 6 7 8
        3/2+1
    
    
    */
            if(high%2==0 and low%2==0)
            {
                int diff=high-low;
                return diff/2;
            }
            else if(high%2!=0 and low%2==0)
            {
                int diff=high-low;
                return diff/2;
            }
            else if(high%2!=0 and low%2!=0)
            {
                // N/2 +1
                int diff=high-low;
                return (diff/2)+1;
            }
            else if(low%2!=0 and high%2==0)
            {
                int diff=high-low;
                return (diff/2)+1;
            }
        }
        return (high-low)/2;
    }
};