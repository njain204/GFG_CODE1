class Solution {
public:
     vector<int>ans;
    void solve(Node* &root){
        if(root==NULL)return;
        for(auto &it:root->children) 
            solve(it);
        
        ans.push_back(root->val);
        
    }
    vector<int> postorder(Node* root) {
        solve(root);
        return ans;
    }
};