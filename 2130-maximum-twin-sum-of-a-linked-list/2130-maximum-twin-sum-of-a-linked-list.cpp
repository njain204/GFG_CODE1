class Solution {
public:
        ListNode* x;
    void solve(ListNode* p,int &ans){
        if(p==NULL){
            return;
        }
        solve(p->next,ans);
        ans = max(ans,p->val+x->val);
        x = x->next;
    }
    int pairSum(ListNode* head) {
        ListNode* p = head,*q = head;
        x = head;
        int ans = 0;
        while(p && p->next){
            p = p->next->next;
            q = q->next;
        }
        solve(q,ans);
        return ans;
    }

};