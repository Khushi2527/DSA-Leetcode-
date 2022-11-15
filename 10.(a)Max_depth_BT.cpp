class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ld= maxDepth(root->left);
        int rd= maxDepth(root->right);
        
        return max(ld,rd)+1;
    }
};
