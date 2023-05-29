class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
       if(root==NULL) return NULL;
    TreeNode*right=invertTree(root->right);
    TreeNode*left=invertTree(root->left);
        root->right=left;
        root->left=right;
        return root;
    }
};