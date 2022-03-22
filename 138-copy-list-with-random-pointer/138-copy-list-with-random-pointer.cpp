/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
          unordered_map<Node*, Node*> mp;    
  mp[NULL]=NULL;    
  Node* curr=head,*prev=NULL,*newhead=NULL;
  
  while(curr!=NULL){
    Node* temp=new Node(curr->val);   
    if(newhead==NULL)
      newhead=temp;
    else
      prev->next=temp;
    mp[curr]=temp;                   
    prev=temp;                 
    curr=curr->next;
  }
 
  curr=head;
  Node* curr2=newhead;
  while(curr!=NULL and curr2!=NULL){
 
    curr2->random=mp[curr->random];   
 
    curr2=curr2->next;
    curr=curr->next;
  }
  
  return newhead;
    }
};