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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         int carr=0,digit=0;
        
        ListNode *res=new ListNode(-1);
               
        ListNode *ans=NULL;
        ans=res;
        
        while(l1 || l2)
        {
            digit=carr;
            if(l1)
            {
                digit+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                digit+=l2->val;
                l2=l2->next;
            }
           
                carr=digit/10;
                digit=digit%10;
          
           
            res->next= new ListNode(digit);
            res=res->next;
        }
        
        if(carr)
        {
             res->next=new ListNode(carr);
            res=res->next;
        }
        
         
        
        
        return ans->next;
        
            
        
    }
};