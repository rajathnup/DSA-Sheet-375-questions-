class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node *temp=head;
     Node *prev=NULL;
     set<int> s1;
     while(temp!=NULL)
     {
         if(s1.find(temp->data)!=s1.end())
         {
            prev->next=temp->next;
            delete(temp);
         }
         else
         {
             s1.insert(temp->data);
             prev=temp;
         }
         temp=prev->next;
     }
     return head;
    
    }
};
