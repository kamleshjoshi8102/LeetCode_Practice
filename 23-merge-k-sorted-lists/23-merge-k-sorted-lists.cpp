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
    
    // compare function is here to return comparision
    
    struct comp
    {
        bool operator() (ListNode*lhs , ListNode *rhs)
        {
            return lhs->val>rhs->val;
        }
    };
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         int k=lists.size();
        if(k==1)return lists[0];
        if(k==0) return NULL;
        
        ListNode*dummy=new ListNode(-1) , *p=dummy;
        
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        
        for(ListNode*head:lists)
        {
            if(head!=NULL)
            {
                pq.push(head);
            }
        }
        while(!pq.empty())
        {
            // Getting smallest node and connecting it to result list
            ListNode * node=pq.top();
            pq.pop();
            p->next=node;
            if(node->next!=nullptr)
            {
                pq.push(node->next);
            }
            p=p->next;
        }
        return dummy->next;
            
    
        
            
    }
};