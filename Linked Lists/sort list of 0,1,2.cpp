class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int count_zero=0;
        int count_one=0;
        int count_two=0;
        Node *temp=head;
        while(temp)
        {
            if(temp->data==0)
            {
                count_zero++;
            }
            if(temp->data==1)
            {
                count_one++;
            }
            if(temp->data==2)
            {
                count_two++;
            }
            temp=temp->next;
        }
        Node *temp1=head;
        while(temp1)
        {
            if(count_zero>0)
            {
                temp1->data=0;
                count_zero--;
            }
            else if(count_one>0)
            {
                temp1->data=1;
                count_one--;
            }
            else
            {
                temp1->data=2;
                count_two--;
            }
            temp1=temp1->next;
        }
        return head;
    }
};
