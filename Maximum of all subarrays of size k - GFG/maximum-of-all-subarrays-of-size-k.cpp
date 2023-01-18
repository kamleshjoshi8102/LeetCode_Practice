//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;

        if(n==k){

            sort(arr,arr+n);

            ans.push_back(arr[n-1]);

            return ans;

          }

        

         if(k==1){

             for(int i=0;i<n;i++)

                ans.push_back(arr[i]);

             return ans;

        }

        

        int max= INT_MIN;

        int j=-1;  // it store the index of maximum element

     

     for(int i=0;i<k;i++){    // find first group max elemt

         if(arr[i]>=max){

             max=arr[i];

             j=i;}

     }

     ans.push_back(max); 

     int i=k;

     

     while(i<n){   

       if(arr[i]>max){

           max=arr[i];

           j=i;

           ans.push_back(max);

        //   i++;

       }

       else if(j<i-k+1){

          max = INT_MIN;

          j=-1;

          for(int l=i-k+1;l<=i;l++){

              if(arr[l]>max){

                  max =arr[l];

                  j=l;

                  

              }

          }

          ans.push_back(max);

        //   i++;

       }

            

       

       else{

         ans.push_back(max);

        //   i++;

       }

      i++;

       

     }

     return ans;


    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends