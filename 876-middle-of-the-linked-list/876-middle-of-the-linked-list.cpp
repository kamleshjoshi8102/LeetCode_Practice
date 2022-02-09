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
    ListNode* middleNode(ListNode* head) {
     int cn=0;
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *p=head;
        while(p)
        {
            p=p->next;
            cn++;
        }
        cn=cn/2;
        
        int k=0;
        p=head;
        while(k<cn)
        {
            k++;
            p=p->next;
        }
        return p;      
    }
};