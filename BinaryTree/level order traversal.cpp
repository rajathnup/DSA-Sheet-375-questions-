//https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
      if(root==NULL)return res;
        q.push(root);
        while(!(q.empty()))
        {
            vector<int>ans;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                ans.push_back(temp->val);
            }
            res.push_back(ans);
        }
        return res;
    }
};
