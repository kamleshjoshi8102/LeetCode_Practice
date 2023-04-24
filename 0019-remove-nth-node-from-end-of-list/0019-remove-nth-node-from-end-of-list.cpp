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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cn=0;
        ListNode *p=head;
        
        while(p)
        {
            p=p->next;
            cn++;
        }
        int st=(cn-n)+1;

        // del(head,st,cn);


        // if st==1

        if(head!=NULL and st==1)
        {
            head=head->next;
            return head;
        }

        // if it's last postion

        if(cn==st)
        {
            p=head;
            while(p->next->next!=NULL)
            {
                p=p->next;
            }
            p->next=NULL;
            return head;
        }

        ListNode *q=head;
        p=head;

        while(st>1)
        {
            st--;
            q=p;
            p=p->next;
        }
        q->next=p->next;
        
        return head;

    }
};