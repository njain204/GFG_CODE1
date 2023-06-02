class Solution {
public:
    int maxPathSum(TreeNode* root) {
       int maxi= INT_MIN;
        maxpathdown(root,maxi);
        return maxi;
    }
    int maxpathdown(TreeNode*root,int &maxi){
        if(!root)
            return 0;
        int left=max(0,maxpathdown(root->left,maxi));
        int right=max(0,maxpathdown(root->right,maxi));
        maxi=max(maxi,left+right+root->val);
        return max(left,right) + root->val;
    }
};