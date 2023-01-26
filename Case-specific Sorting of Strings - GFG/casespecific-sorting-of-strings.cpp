//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution

{

    public:

    //Function to perform case-specific sorting of strings.

    string caseSort(string s, int n)

    {

        // your code here

        string l;

        string h;

        for(int i=0;i<n;i++)

        {

            if(s[i]<=122&&s[i]>=97)

            l+=s[i];

            else

            h+=s[i];

        }

        string ans;

        sort(h.begin(),h.end());

        sort(l.begin(),l.end());

        int li=0;

        int hi=0;

        for(int i=0;i<n;i++)

        {

             if(s[i]<=122&&s[i]>=97)

             ans+=l[li++];

             else

             ans+=h[hi++];

        }

       return ans; 

    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends