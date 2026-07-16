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
    int minD(TreeNode* root){
        if(!root) return 0;
        if(!root->left) return minD(root->right)+1;
        if(!root->right) return minD(root->left)+1;
        return min(minD(root->right),minD(root->left))+1;
    }
    int minDepth(TreeNode* root) {
        return minD(root);
    }
};