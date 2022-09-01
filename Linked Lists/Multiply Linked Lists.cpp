long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long num1=0;
  long long num2=0;
  Node *temp1=l1;
  Node *temp2=l2;
  while(temp1!=NULL)
  {
      num1=((num1*10)%1000000007)+temp1->data;
      temp1=temp1->next;
  }
  while(temp2!=NULL)
  {
      num2=((num2*10)%1000000007)+temp2->data;
      temp2=temp2->next;
  }
long long res=((num1%1000000007)*(num2%1000000007))%1000000007;
  return res;
}
