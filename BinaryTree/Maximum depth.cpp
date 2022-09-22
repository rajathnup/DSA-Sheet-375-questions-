//https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            return 1;
        }
         queue<TreeNode *>q;
        q.push(root);
        int count=0;
        while(!(q.empty()))
        {
            count++;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
        }
        
        return count;
    }
};
