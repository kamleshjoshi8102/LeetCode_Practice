class Solution {
public:
    
    // Standared problem of monotonic stack 
    // used simple logic like find every greater element then any index
    // every time
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        unordered_map<int,int>mp;
        vector<int>v;
        
        
        
        for(int i=0;i<nums2.size();i++)
        {
            while(st.size()>0 and nums2[i]>st.top())
            {
                mp[st.top()]=nums2[i];  // means this is greater than you mfs
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty())
        {
            mp[st.top()]=-1;    // means no one is greater than you mfs
            st.pop();
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(mp[nums1[i]]);
        }
        return v;
        
        
    }
};