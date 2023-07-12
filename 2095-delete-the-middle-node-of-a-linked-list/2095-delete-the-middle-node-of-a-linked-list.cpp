class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
     ListNode* slow=head;
        if (head->next==NULL) return NULL;
        ListNode* fast=head->next;
        if(fast->next==NULL)
        {
            slow->next=NULL;
            return head;
        } 
        ListNode* x=NULL;
        while(fast && fast->next) 
        {
            fast=fast->next->next;
            x=slow;
            slow=slow->next;
        }
        if(fast==NULL)
        {
            x->next=slow->next;
        }
        else if(fast->next==NULL)
        {
            slow->next=slow->next->next;
        }
        return head;
   
    }
};