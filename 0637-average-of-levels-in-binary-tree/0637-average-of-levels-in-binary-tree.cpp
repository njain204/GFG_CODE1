class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode*>myQueue;
        if(root==NULL)
            return v;
       myQueue.push(root);
        while(myQueue.size()){
            int l = myQueue.size();
        double sum=0.0;
        for (int i = 0; i < l; i++) {
            TreeNode *tmp = myQueue.front();
             myQueue.pop();
            sum+=tmp->val;

            if (tmp->left)
                myQueue.push(tmp->left);
            if (tmp->right)
                myQueue.push(tmp->right);
        }
            v.push_back(sum/l);
    }
        return v;
    }
};