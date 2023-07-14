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
        ListNode*slow=head,*fast=head;
        
        if(head==nullptr)
        {
            return nullptr;
        }
        
        
        while(fast)
        {
            slow=slow->next;
            fast=fast->next;
            
            if(fast)
            {
                fast=fast->next;
            }
            if(slow==fast){
                break;
            }
        }
        // now we have both slow and fast at one node 
        // now acc. to conditions and maths equation we will start from head;
        
        fast=head;
        
        while(fast!=slow and slow!=nullptr and fast!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        return slow;
    }
};