class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int min=INT_MAX;
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
        int l=v.size();
        for(int i=0;i<l-1;i++){
            if((v[i+1]-v[i])<min)
                min=v[i+1]-v[i];
                     }
        return min;
    }
};