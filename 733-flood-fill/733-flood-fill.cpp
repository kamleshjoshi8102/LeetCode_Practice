class Solution {
public:
    
     void dfs(vector<vector<int>>& image, int sr,int sc, int newColor, int rows, int cols, int source){
        if(sr<0 || sr>=rows || sc<0 || sc>=cols) return ; 
        else if(image[sr][sc]!=source) return; 
        image[sr][sc]=newColor;  
        dfs(image,sr-1,sc,newColor,rows,cols,source);//up
        dfs(image,sr+1,sc,newColor,rows,cols,source);//down
        dfs(image,sr,sc-1,newColor,rows,cols,source);//left
        dfs(image,sr,sc+1,newColor,rows,cols,source);//right  
    }  
    /*
        00 01 02
        10 11 12 
        20 21 22
    */
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        int src=image[sr][sc];
        if(newColor==image[sr][sc]) return image;
        dfs(image,sr,sc,newColor,n,m,src);
        
        return image;
    }
};