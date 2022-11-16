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
    vector<vector<int>>ans;
    
    void path(TreeNode* root, int sum, vector<int>&v){
        if(root==NULL) return;
        sum-= root->val;
        v.push_back(root->val);
        if(!root->left && !root->right && sum==0) 
            ans.push_back(v);
        else{
            path(root->left, sum, v);
            path(root->right, sum, v);
        }
        v.pop_back(); // backtracking //
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        path(root, targetSum, v);
        return ans;
    }
};
