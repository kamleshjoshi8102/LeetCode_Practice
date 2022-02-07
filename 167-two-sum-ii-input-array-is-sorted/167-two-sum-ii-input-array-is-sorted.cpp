class Solution {
public:
    
    int bn(int l , int r , int x,vector<int>&arr)
    {
        while(l <= r){
            int m = l+(r-l) / 2;
            if(arr[m] == x)
                return m;
            else if(arr[m] > x)
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
    int bn(vector<int> &arr , int l , int r , int x){
        while(l <= r){
            int m = l + (r - l) / 2;
            if(arr[m] == x)
                return m;
            else if(arr[m] > x)
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
         vector<int> ans(2);
        int n = numbers.size();
        for(int i = 0 ; i < numbers.size() - 1 ; i++){
            int x = target - numbers[i];
            int el = bn(numbers , i + 1 , n - 1 , x);
            if(el != -1){
                ans[0] = i + 1;
                ans[1] = el + 1;
            }
        }
        return ans;
    }
};