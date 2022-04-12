class Solution {
public:
    int binSearch(int val, int stIdx, vector<int> &nums2){
        int lo = stIdx;
        int hi = nums2.size() - 1;
        int m;
        
        while(hi - lo > 1){
            m = (lo + hi) / 2;
            if(val <= nums2[m]){
                lo = m;
            }else{
                hi = m;
            }
        }
        if(nums2[hi] >= val){
            return hi;
        }else if(nums2[lo] >= val){
            return lo;
        }else{
            return -1;
        }
    }
    
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int maxN = 0;
        for(int i = 0; i < n; i++){
            if(i > nums2.size() - 1){
                break;
            }
            maxN = max(maxN, binSearch(nums1[i], i, nums2) - i);
        }
        return maxN;
    }
};