class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        
            
        int i=0;
        int j=height.size()-1;
        
        while(i<j)
        {
            int mini=min(height[i],height[j]);
            int an=mini*(j-i);
            
            maxi=max(maxi,an);
            if(height[j]<height[i])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxi;
        
    }
};