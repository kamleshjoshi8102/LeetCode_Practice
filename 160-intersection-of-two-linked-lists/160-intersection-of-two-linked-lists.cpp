/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    // Nothing to think in this problem 
    // just take size of first and second list;
    // increment larger one till it's equal to second one 
    // and then simply check if equal then return that position 
    // else return NULL
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1=0,size2=0;
        ListNode*start1=headA;
        ListNode*start2=headB;
            
        while(start1)
        {
            start1=start1->next;
            size1++;
        }

        while(start2)
        {
            start2=start2->next;
            size2++;
        }
        start1=headA;
        start2=headB;
        
        if(size1>size2)
        {
            for(int i=0;i<size1-size2;i++)
            {
                start1=start1->next;
            }
        }
        else
        {
            for(int i=0;i<size2-size1;i++)
            {
                start2=start2->next;
            }
        }
        while(start1 and start2)
        {
            if(start1==start2)
            {
                return start1;
            }
         start1=start1->next;
         start2=start2->next;   
                
        }
        
        return NULL;
   
        
        
    }
};