class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
             int j=n-1;
            while(j>=0)
            {
                if(i!=j && arr[i]*2==arr[j])
                {
                    return true;
                }j--;
            }
        }
        return false;
    }
};