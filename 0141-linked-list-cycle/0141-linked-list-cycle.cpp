/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if( head==nullptr or head->next==nullptr)
        {
            return false;
        }
        ListNode * slow=head, *fast = head->next;
        while(fast)
        {
            if(slow==fast)
            {
                return true;
            }
            fast=fast->next;
            
            if(fast)
            {
                fast=fast->next;
            }
            slow=slow->next;
        }
        return false;
        
    }
};