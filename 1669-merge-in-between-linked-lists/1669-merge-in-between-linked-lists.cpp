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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode*head=list1;
        int index=0;
        
        ListNode* last2=list2;
        
        while(last2->next)
        {
            last2=last2->next;
        }
        ListNode*temp = new ListNode();
        temp->next=list1;
        
        while(temp)
        {
           if(temp->next!=nullptr and index==a)
           {
               ListNode*te = temp;
               temp=temp->next;
               te->next=list2;
           }
        
         if(temp->next!=nullptr and index==b)
           {
                last2->next = temp->next;
                break;
           }
            index++;
           temp=temp->next;
        }
        
        return head;
    }
};