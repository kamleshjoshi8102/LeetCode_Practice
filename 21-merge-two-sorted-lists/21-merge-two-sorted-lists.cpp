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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*p=new ListNode();
        ListNode*head=p; 
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                ListNode*n=new ListNode();
                n->val=list1->val;
                p->next=n;
                p=n;
                list1=list1->next;
            }
            else
            {
                    ListNode*n=new ListNode();
                    n->val=list2->val;
                    p->next=n;
                    p=n;
                    list2=list2->next;
            }
            
        }
         if(list1!=NULL)
         {
             p->next=list1;
         }
        if(list2!=NULL)
        {
            p->next=list2;
        }
        return head->next;        
    }
};