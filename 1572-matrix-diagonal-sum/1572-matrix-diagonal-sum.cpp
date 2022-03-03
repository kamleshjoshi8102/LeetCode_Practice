class Solution {
public:
    /*
        00 01 02 03
        10 11 12 13
        20 21 22 23
        30 31 32 33
    */
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int x=0,y=0 , a=0,b=n-1;
        int su=0;
        for(int i=0;i<n/2;i++)
        {
            su+=mat[a][b];
            su+=mat[x][y];
            a++;b--;
            x++;y++;
        }
        int st=n/2;
        // cout<<st<<endl;
        if(n%2!=0)
        {
            st=(n/2)+1;
            int half=n/2;
            int ha=m/2;
            su+=mat[half][ha];
            a++;b--;
            x++;y++;
        }
        
        // cout<<st<<endl;
        for(int i=st;i<n;i++)
        {
                    su+=mat[a][b];
                    su+=mat[x][y];
            a++;b--;
            x++;y++;
        }
        return su;
    }
};