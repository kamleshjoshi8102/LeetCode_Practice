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
     map<int,int>mp;
        
        ListNode*w=head;
        while(w)
        {
            mp[w->val]++;
            w=w->next;
        }
        ListNode*h=new ListNode();
        
        ListNode*p=new ListNode();
        
        h->next=p;
        
    // for(auto x:mp)
    // {
    //     cout<<x.first<<' '<<x.second;
    //     cout<<endl;
    // }
        
        for(auto x:mp)
        {
           if(x.second==1)
           {
               // cout<<x.first<<endl;
                ListNode *q=new ListNode(x.first);
                 p->next=q;
                    p=q;
           }
        }
        return h->next->next;
        
    }
};