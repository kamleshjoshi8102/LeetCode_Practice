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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* st=head;
        
        while(st)
        {
            if(st->next!=NULL and st->next->val==st->val)
            {
                ListNode*q=st;
                while(q and st->val==q->val)
                {
                    q=q->next;
                }
                st->next=q;
            }
            st=st->next;
        }
        return head;
        
    }
};