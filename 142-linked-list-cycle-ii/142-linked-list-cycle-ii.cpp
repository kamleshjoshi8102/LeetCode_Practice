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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head,*entry=head;
        
        // first case cleared
        if(head==NULL)
        {
            return NULL;
        }
        if(fast->next==NULL )
            return NULL;
        if(fast->next->next==NULL){return NULL;} 
        
        while(fast->next && fast->next->next)
        {
             fast=fast->next->next;
             slow=slow->next;
            
            if(slow==fast)
            {
                while(entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        
        }
        return NULL;
        
        
    }
};