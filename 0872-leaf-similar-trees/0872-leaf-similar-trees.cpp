class Solution {
public:
void countleaf(TreeNode* root,vector<int>&v){
    if(!root)
    return;
    if(!root->left &&!root->right)
    {
        v.push_back(root->val);
    }
    countleaf(root->left,v);
countleaf(root->right,v);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
countleaf(root1,v1);
countleaf(root2,v2);
            return (v1==v2);
    }
};