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
        if(!root) return -1;
        int lheight = maxim(root->left);
        int rheight = maxim(root->right);
        return max(lheight,rheight)+1;
    }
    int maxDepth(TreeNode* root) {
        return maxim(root)+1;
    }
};