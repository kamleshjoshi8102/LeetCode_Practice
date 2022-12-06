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
class Solution 
{
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if (!head) return head;

        ListNode *dummy_odd = new ListNode(0, head), 
                 *dummy_evn = new ListNode(0, head->next),
                 *evn = dummy_evn, *odd = dummy_odd;

        while (odd->next && (odd = odd->next) && (evn = evn->next))
        {
            if (odd->next) odd->next = odd->next->next;
            if (evn->next) evn->next = evn->next->next;
        }

        odd->next = dummy_evn->next;

        return dummy_odd->next;
    }
};