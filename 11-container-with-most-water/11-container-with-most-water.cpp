class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        
            
        int i=0;
        int j=height.size()-1;
        int n=height.size();
        
        while(i<j)
        {
            int mini=min(height[i],height[j]);
            int b=j-i;
            maxi=max(maxi,mini*b);
            if(height[j]<height[i])
            {
                j--;
            }
            else
            {
                i++;
            }
            
            // cout<<mini<<' '<<b<<endl;
            
        }
        return maxi;                
        
    }
};