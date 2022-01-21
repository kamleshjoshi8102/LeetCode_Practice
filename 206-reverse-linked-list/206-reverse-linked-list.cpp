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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=head,*q=NULL;
        if(head==NULL)
        {
            return NULL;
        }
        p=head;
        
        
        while(p)
        {
            ListNode *r=p->next;
                p->next=q;
            q=p;
            p=r;
        }
        // p->next=r;
        
        return q;
    }
};