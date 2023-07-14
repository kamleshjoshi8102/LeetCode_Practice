/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        
        stack<int>st;
        ListNode *temp=head;
        
        while(temp)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        int cnt = st.size();
        int maxi = INT_MIN;
        
        while(temp and st.size()>cnt/2)
        {
            maxi=max(maxi,st.top()+temp->val);  
            st.pop();
            temp=temp->next;
        }
        
        
        return maxi;
        
        
    }
};