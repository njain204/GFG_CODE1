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
       queue<Node*> q;
        if(root)q.push(root);
        
        int ln;
        while(!q.empty()){
            
            ln= q.size();
            for(int i=0;i<ln;i++){
                
                auto temp= q.front();
                q.pop();
                
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);

                if(i== ln-1) temp->next= NULL;
                else temp->next= q.front();
            }
        }
        return root;
    }
};