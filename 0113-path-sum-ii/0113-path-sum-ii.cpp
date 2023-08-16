class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        dfs(root,path,targetSum);
        return ans;
    }
    void dfs(TreeNode* root,vector<int>&path,int target){
        if(!root)
    return ;
        target-=root->val;
        path.push_back(root->val);
        if(!root->right && !root->left){
            if(target==0)
                ans.push_back(path);

        }
        else{
            dfs(root->left,path,target);
            dfs(root->right,path,target);
        }
        path.pop_back();
    }
};