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
    int dfs(TreeNode* root,int& dominant){
        if(root==NULL) return INT_MIN;
        int ldom = dfs(root->left,dominant);
        int rdom = dfs(root->right,dominant);
        if(root->val >= ldom && root->val >= rdom){
            dominant+=1;
        }
        return max(root->val,max(ldom,rdom));
    }
    int countDominantNodes(TreeNode* root) {
        int dominant=0;
        dfs(root,dominant);
        return dominant;
    }
};