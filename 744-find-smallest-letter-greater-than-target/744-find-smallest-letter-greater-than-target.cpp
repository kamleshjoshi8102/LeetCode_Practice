class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res=letters[0];
        int re=0;
        int lo=0 , hi=letters.size()-1;
        
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            
            if(letters[mid]<=target)
            {
                lo=mid+1;
            }
            else
            {
                re=mid;
            hi=mid-1;
            }
            
        }
        if(re==letters.size()-1 && letters[re]<=target)
        {
            return letters[0];
        }
        return letters[re];
        
        
        
        
    }
};