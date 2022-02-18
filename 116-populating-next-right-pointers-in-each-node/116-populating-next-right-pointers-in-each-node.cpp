/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
       queue<Node*>q;
        q.push(root);
        q.push(NULL);
        int count=0;
        while(q.size()>1)
        {
            Node* curr=q.front();
            q.pop();
            if(curr!=NULL)
            curr->next=q.front();
            if(curr==NULL)
            {
                count++;
                if(q.size()>=pow(2,count))
                q.push(NULL);
            } 
            else{
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return root;
    }
};