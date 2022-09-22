//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node *>q;
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    q.push(root);
    
    while(!(q.empty()))
    {
        int size=q.size();
        
        for(int i=0;i<size;i++)
        {
            Node *temp=q.front();
            ans.push_back(temp->data);
            q.pop();
            if(temp->right!=NULL)q.push(temp->right);
            if(temp->left!=NULL)q.push(temp->left);
            
        }
    }
    for(int i=0;i<(ans.size())/2;i++)
    {
        int temp=ans[i];
        ans[i]=ans[ans.size()-i-1];
        ans[ans.size()-i-1]=temp;
    }
    return ans;
}
