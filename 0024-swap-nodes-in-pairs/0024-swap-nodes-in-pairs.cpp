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
    ListNode* swapPairs(ListNode* head) {
        //      1 2 3 4
        // p    q r
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode*p=NULL,*q=head;
if(q->next!=NULL)
{
    q=q->next;
    head->next=q->next;
    q->next=head;
    head=q;
}
        // cout<<head->next->val<<endl;
        
        q=head->next->next;
        ListNode * curr=head->next;
        // cout<<q->val;
        
        while(q)
        {
            if(q->next)
            {
                ListNode *r=q->next;
                curr->next=r;
                q->next=r->next;
                curr=q;
                r->next=q;
            }
            q=q->next;
        }
        
        return head;
        
    }
};