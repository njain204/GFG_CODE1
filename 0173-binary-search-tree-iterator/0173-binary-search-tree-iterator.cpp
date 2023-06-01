class BSTIterator {
    private:  stack<TreeNode*>mystack;
public:
   
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    int next() {
        TreeNode* tmnode=mystack.top();
        mystack.pop();
        pushall(tmnode->right);
        return tmnode->val;
    }
    
    bool hasNext() {
        return !mystack.empty();
    }
    private:
    void pushall(TreeNode*node){
        for(;node!=NULL;mystack.push(node),node=node->left);
    }
};