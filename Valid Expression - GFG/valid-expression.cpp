// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    stack<char>se;
    for(auto x:s)
    {
        if(x==')' and se.size()>0 and se.top()=='(')
        {
            se.pop();
        }
        else if(x=='}' and se.size()>0 and se.top()=='{')
        {
            se.pop();
        }
        else if(x==']' and se.size()>0 and se.top()=='[')
        {
            se.pop();
        }
        else
        {
            se.push(x);
        }
    }
    if(se.size()==0)
    {
        return 1;
    }
    return 0;
}