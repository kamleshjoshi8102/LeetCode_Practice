class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0,j=height.size()-1;
        int n=height.size()-1;
        int maxi=0;
        
        while(i<j)
        {
            // cout<<i<<' '<<j<<endl;
            int mini=min(height[i],height[j]);            
            maxi=max((j-i)*mini,maxi);
            if(height[i]<height[j]){i++;}
            else{j--;}        
        }
        return maxi;
    }
};
/*
    1 2 3 4 5 6 7 8 9 
    
        n-i-(n-j)
        9-3-(9-6)
        3

*/