//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0){
            String S = read.readLine().trim();
            Solution ob = new Solution();
            int ans = ob.countSubstring(S);
            System.out.println(ans);
        }
    } 
} 
// } Driver Code Ends


//User function Template for Java
/*class Solution 
{ 
    int countSubstring(String S) 
    { 
        // code here
    }
} */

class Solution 
{ 
    int countSubstring(String s) 
    { 
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            String st = "";
            int upp = 0;
            int low = 0;
            for (int j = i ; j < s.length(); j++) {
                if (s.charAt(j) >= 'A' && s.charAt(j) <= 'Z') upp++;
                else low++;
                if (low != 0 && low == upp) count++;
                
            }
        }
        return count;
    }
} 


