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
    int sum(TreeNode* root, int& ans){
        if(!root) return 0;
        int cleft = sum(root->left,ans);
        cleft = max(0,cleft);
        int cright = sum(root->right,ans);
        cright = max(0,cright);
        ans = max(ans,cleft+root->val+cright);
        return root->val+max(cleft,cright);
    }
    int maxPathSum(TreeNode* root) {
        int ans =INT_MIN;
        sum(root,ans);
        return ans;
    }
};