class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         int n=numRows;
        vector<vector<int>>finall;
       vector<int>temp;
        if(n==1)
       {
            temp.push_back(1);
            finall.push_back(temp);
           return finall;
       }
        if(n==2)
        {
            temp.push_back(1);
            finall.push_back(temp);
            temp.push_back(1);
           
            finall.push_back(temp);
            return finall;
        }
            //for inserting 1, 11
                temp.push_back(1);
                finall.push_back(temp);
                temp.push_back(1);
                finall.push_back(temp);
            
        int k=0;
        while(k<n-2)
        {
             vector<int>res;
            for(int i=0;i<temp.size();i++)
            {
                if(i==0 ){
                    res.push_back(1);
                }
                else if( i==temp.size()-1){
                    res.push_back(1);
                    break;
                } 
                    res.push_back(temp[i]+temp[i+1]);
            }
            temp=res;
            finall.push_back(temp);
            k++;
        }
        return finall;
    }
};