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