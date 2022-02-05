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
      ListNode*p=head;
      ListNode*ans=new ListNode(0);  
        ListNode* ptr=ans;
        while(p)
        {
            if(p->next!=NULL and p->next->val==p->val)
            {
                ListNode*q=p->next;
                while(q!=NULL and q->val==p->val)
                {
                    q=q->next;
                }
                // cout<<q->val<<endl;
                // q=q->next;
                p=q;                
            }
            else
            {                
                cout<<p->val<<endl;
                
                ListNode*ne=new ListNode(p->val);
                ptr->next=ne;
                ptr=ne;
                p=p->next;
            }
            // p=p->next;
        }
        
        return ans->next;
    }
};