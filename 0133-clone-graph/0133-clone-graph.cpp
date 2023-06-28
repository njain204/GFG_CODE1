class Solution {
public:
    unordered_map<int,Node*> mp;
    Node* cloneGraph(Node* node) 
    {
        if(node==NULL)
            return NULL;
    
        if(mp.find(node->val)!=mp.end())
            return mp[node->val];

        Node *t = new Node(node->val);
        mp[node->val] = t;
        
        for(Node *n: node->neighbors)
        {
            Node * p = cloneGraph(n);
            t->neighbors.push_back(p);
        }
        return t;
        
        
    }
};