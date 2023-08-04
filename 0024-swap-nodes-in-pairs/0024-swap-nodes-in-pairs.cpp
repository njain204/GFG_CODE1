class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if(!head || !head->next){
            return head;
        }
        ListNode* p = head,*q=head->next;
        while(true){
            swap(p->val,q->val);
            if(!(q->next && q->next->next))break;
            p = p->next->next;
            q = q->next->next;
        }
        return head;
    }
};