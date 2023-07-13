class Solution {
public:
int ans=0;
void dood(TreeNode*root,int curr){
if(!root)
return ;
if(root->val>=curr)
{
ans++;
curr=root->val;
}
dood(root->left,curr);
dood(root->right,curr);
}
    int goodNodes(TreeNode* root) {
        if(!root)
        return 0;
        dood(root,root->val);
        return ans;
    }
};