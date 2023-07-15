class Solution {
public:
    
    // Function to reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        
        while (head) {
            ListNode* curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        // Reverse the linked list
        head = reverse(head);
        
        ListNode* temp = head;
        ListNode* prev = head;
        
        int maxi = INT_MIN; // Initialize the maximum value
        
        while (temp) {
            if (temp->val < maxi) {
                // Remove the node
                prev->next = temp->next;
                temp = temp->next;
            } else {
                // Update the maximum value and move to the next node
                maxi = max(maxi, temp->val);
                prev = temp;
                temp = temp->next;
            }
        }
        
        // Reverse the linked list again to restore the original order
        head = reverse(head);
        
        return head;
    }
};