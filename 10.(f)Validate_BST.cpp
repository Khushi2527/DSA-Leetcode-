/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* root, TreeNode* lo, TreeNode* hi){
        if(root==NULL) return true;
        if(lo && root->val<= lo->val || hi && root->val>=hi->val) return false;
        
        return (check(root->left, lo, root) && check(root->right,root,hi));
    }
    
    bool isValidBST(TreeNode* root) {
        return check(root, NULL, NULL);
    }
};
