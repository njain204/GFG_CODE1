class Solution {
public:
    int countNodes(TreeNode* root) {
      if(!root)
          return 0;
        int LL=1;
        int RR=1;
        TreeNode*L=root->left;
         TreeNode*R=root->right;
        while(L){
            L=L->left;
            LL++;
        }
        
         while(R){
            R=R->right;
            RR++;
        }
        if(RR==LL)
            return pow(2,RR)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};