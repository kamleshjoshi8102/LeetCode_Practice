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
    int getDecimalValue(ListNode* head) {
        int checkval=1;
        if(head==nullptr)
        {
            return 0;
        }
        ListNode*temp=head;
        
        while(temp)
        {
            checkval=checkval*2;
            temp=temp->next;
        }
        
        checkval=checkval/2;
        
        temp=head;
        int res =0;
        
        while(temp)
        {
            
            // cout<<checkval<<endl;
            
            res=res+(checkval*temp->val);
            checkval=checkval/2;
            temp=temp->next;
        }
        
        return res;
        
    }
};