class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       del->data=del->next->data;
       Node *remove=del->next;
       del->next=remove->next;
       free(remove);
    }

};
