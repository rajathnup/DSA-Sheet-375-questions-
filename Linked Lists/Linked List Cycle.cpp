class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *onestep=head, *twostep=head;
        while(twostep!=NULL&&twostep->next!=NULL)
        {
            onestep=onestep->next;
            twostep=twostep->next->next;
            if(onestep==twostep)
            {
                return true;
            }
        }
        return false;
    }
};
