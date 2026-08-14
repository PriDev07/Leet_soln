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
    int maxim(TreeNode* root){
        if(root==nullptr) return 0;
        int left = maxim(root->left)+1;
        int right = maxim(root->right)+1;
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return maxim(root);
    }
};