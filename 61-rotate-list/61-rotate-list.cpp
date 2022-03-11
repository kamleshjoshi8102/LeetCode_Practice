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
        if(head==NULL || k==0 )
        {
            return head;
        }
        int cn=0;
        ListNode*p=new ListNode();
        p=head;
        vector<int>v;
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
            cn++;
        }
        
        if(k>=v.size())
        {
            k=k%v.size();
        }
        
        int st=v.size()-k;
        
        // if(k==0)
        // {
        //     return p;
        // }
        
        // cout<<st<<endl;
        
        ListNode*ans=new ListNode();
        
        ListNode*ch=new ListNode();
        ans=ch;
        
        for(int i=st;i<v.size();i++)
        {
            ListNode*io=new ListNode(v[i]);
            ch->next=io;
            ch=ch->next;
        }
        for(int i=0;i<st;i++)
        {
            ListNode*io=new ListNode(v[i]);
            ch->next=io;
            ch=ch->next;
        }
        for(auto x:v)
        {
            cout<<x<<' ';
        }
        return ans->next;
        
        
    }
};