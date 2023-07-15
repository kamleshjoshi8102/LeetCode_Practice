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
    
    
    ListNode* reverse(ListNode*head)
    {
        
        ListNode*temp = head , *prev=head;
        
        if(head->next==nullptr)
        {
            return head;
        }
        
        while(head)
        {
            if(temp==head)
            {
                ListNode*curr = head->next;
                head->next=nullptr;
                prev=head;
                head=curr;
            }
            else if(head->next==nullptr)
            {
                head->next=prev;
                return head;
            }
            else
            {
                ListNode*curr = head->next;
                head->next=prev;
                prev=head;
                head=curr;
            }
        }
        return head;
    }
    
    
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        
        ListNode*temp = head, *prev=head;
        
        int maxi = INT_MIN;
        
        while(temp)
        {
            if(temp->val<maxi)
            {
                prev->next=temp->next;
                maxi=max(maxi,temp->val);
                temp=temp->next;
                
            }
            else
            {
                
                maxi=max(maxi,temp->val);
                prev=temp;
                temp=temp->next;
            }
            
        }
        
        cout<<head->val<<endl;
        
        head=reverse(head);
        
        
        return head;
    }
};