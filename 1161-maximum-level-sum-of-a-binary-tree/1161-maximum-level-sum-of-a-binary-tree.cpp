
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level=0;
        int mx=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int levelnumber;
        while(!q.empty()){
            int k=q.size();
            level++;
            int sum =0;
            while(k--){
            TreeNode*x=q.front();
            q.pop();
            sum+=x->val;
            if(x->left)
            q.push(x->left);
            if(x->right)
            q.push(x->right);
            }
            if(mx<sum){
                mx=sum;
                levelnumber=level;
            }

        }
return levelnumber;

    }
};