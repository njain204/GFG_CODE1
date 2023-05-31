class Solution {
public:
    long long ans=0;
    void dfs(TreeNode* root,long long val){
        if(!root)
            return ;
        val*=10;
        val+=root->val;
        if(!root->right&& !root->left){
            ans+=val;
        return;
        }
        dfs(root->left,val);
        dfs(root->right,val);
    }
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root,0);
        return ans;
    }
};