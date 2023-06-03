
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
            while(q.size()){
                TreeNode*curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};