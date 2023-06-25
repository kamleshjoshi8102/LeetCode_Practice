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
    
    bool palin(string temp)
    {
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]!=temp[temp.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        string temp="";
        while(head)
        {
            temp+=head->val;
            head=head->next;
        }
        return palin(temp);
    }
};