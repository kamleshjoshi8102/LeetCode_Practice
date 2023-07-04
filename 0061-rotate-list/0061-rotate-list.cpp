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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        {
            return head;
        }
        if(head->next==nullptr)
        {
            return head;
        }
        
        int size=0;
        ListNode*te=head;
        while(te)
        {
            size++;
            te=te->next;
        }
        
        k=k%size;
        
        while(k--)
        {
            
            ListNode*temp=head;
            
            while(temp->next->next!=nullptr)
            {
                temp=temp->next;
            }
            
            ListNode*t = temp->next;
            temp->next=nullptr;
            
            t->next=head;
            head=t;
            
        }
        return head;
    
    
    }
};