//https://leetcode.com/problems/invert-binary-tree/submissions/

class Solution {
      void swap(TreeNode* curr)
    {
          if(!curr)return;
        swap(curr->left);
        swap(curr->right);
        TreeNode* temp=curr->left;
        curr->left=curr->right;
        curr->right=temp;
    }
public:
    
  
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        swap(root);
        return root;
    }
};
