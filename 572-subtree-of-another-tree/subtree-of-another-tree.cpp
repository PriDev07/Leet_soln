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
 bool isSame(TreeNode* p, TreeNode* q){
    if(!p && !q ) return true;
    if(!p || !q) return false;
    if(p->val != q->val) return false;
    bool left = isSame(p->left,q->left);
    bool right = isSame(p->right,q->right);
    return left && right;
 }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if (isSame(root, subRoot)) {
    return true;
}
        bool left = isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);
        return left | right;
    }
};