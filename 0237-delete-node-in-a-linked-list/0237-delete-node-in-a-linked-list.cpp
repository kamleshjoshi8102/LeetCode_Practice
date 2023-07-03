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
    void deleteNode(ListNode* node) {
        if(node==nullptr)
        {
            return;
        }
        
        ListNode*new_temp_node=node->next;
        
        node->val=new_temp_node->val;
        
        node->next=new_temp_node->next;
        new_temp_node->next=nullptr;
        
        delete new_temp_node;
        
        return;
        
        
    }
};