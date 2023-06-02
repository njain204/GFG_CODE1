/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        recursion(root,0,v);
        return v;
    }
    void recursion(TreeNode*root,int lev,vector<int>&v){
        if(root==NULL)
            return;
        if(v.size()==lev) v.push_back(root->val);
        recursion(root->right,lev+1,v);
        recursion(root->left,lev+1,v);
        
    }
};