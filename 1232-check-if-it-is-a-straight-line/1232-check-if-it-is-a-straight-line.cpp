class Solution {
public:
    
    float slopeLine(float x1, float y1, float x2, float y2)
    {
        if(x1 == x2)
            return INT_MAX;
        return (y2 - y1) / (x2 - x1);
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        float slope;
        slope = slopeLine(coordinates[0][0],coordinates[0][1],coordinates[1][0],coordinates[1][1]);
        
        if(coordinates.size() == 2)
            return true;
        
        for(int i=2; i<coordinates.size(); i++)
        {
            float temp;
            temp = slopeLine(coordinates[i-1][0],coordinates[i-1][1],coordinates[i][0], coordinates[i][1]);
            if(temp != slope)
                return false;
        }
        
        return true;
    }
};