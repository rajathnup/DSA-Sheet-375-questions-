class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nextnode,*prevnode=NULL;
        while(head)
        {
            nextnode=head->next;
            head->next=prevnode;
            prevnode=head;
            head=nextnode;
        }
        
        return prevnode;
    }
    
};
