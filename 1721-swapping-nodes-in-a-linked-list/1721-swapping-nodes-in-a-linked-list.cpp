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
    ListNode* swapNodes(ListNode* head, int k) {
        int cn=1,d1,d2;
        ListNode *p=head;
        
        while(p)
        {
         
            if(k==cn)
            {
                d1=p->val;
            }   cn++;
            p=p->next;
        }
        int sizek=cn-k;
        p=head;
        while(p)
        {
            if(sizek==1)
            {
                d2=p->val;
                p->val=d1;
            }
            p=p->next;
            sizek--;
        }
        p=head;
        cn=1;
        while(p)
        {
            if(cn==k)
            {
                p->val=d2;
            }
            cn++;
             
            p=p->next;
        }
        return head;
    }
};