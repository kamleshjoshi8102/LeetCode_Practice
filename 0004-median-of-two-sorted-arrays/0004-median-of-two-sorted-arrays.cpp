class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double me=0.0;
            
        double su1=0,su2=0;
         int i=0,j=0;
        vector<int>merged;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                merged.push_back(nums1[i++]);
            }
            else  
            {
                merged.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size())
        {
            merged.push_back(nums1[i++]);
        }
        while(j<nums2.size())
        {
            merged.push_back(nums2[j++]);
        }
        
        int mid=merged.size()/2;
     
        // for(auto x:merged)
        // {
        //     cout<<x<< " ";
        // }
        
        if(merged.size()%2==0)
        {
            return (float)(merged[mid-1] + merged[mid])/2; 
        }
        
        return (float)merged[mid];
        
         
        
        
    }
};