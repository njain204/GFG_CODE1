class Solution {
   bool isLeafNode(TreeNode* node){
       if(node->left == NULL and node->right == NULL) return true;
       return false;
   }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;

        queue<TreeNode*>q;
        q.push(root);
        int sumOfLeaves = 0;

        while(!q.empty()){
             int sz = q.size();
             for(int i=0;i<sz;i++){
                 TreeNode* node = q.front();
                 q.pop();

                 if(node->left){
                    if(isLeafNode(node->left)){
                       sumOfLeaves += node->left->val;
                    }
                    q.push(node->left);
                 } 
                 if(node->right) q.push(node->right);

             }
        }
        
        return sumOfLeaves;
    }
};