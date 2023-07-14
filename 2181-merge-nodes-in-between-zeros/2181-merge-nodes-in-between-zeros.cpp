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
    ListNode* mergeNodes(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode*ptr1 =head, *ptr2=head->next;
        ListNode*res=head;
        int su=0;
        
        while(head)
        {
            if(head->val==0 and head!=ptr1)
            {
                ptr1->val=su;
                
                su=0;
                if(head->next==nullptr) {
                    ptr1->next=nullptr;
                }else ptr1=ptr1->next;
            }
            su+=head->val;
            head=head->next;
        }
        
        return res;
    }
};