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
    ListNode* middleNode(ListNode* head) {
        // using tortoise and hare method here
        
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast)
        {
            
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
        
    }
};