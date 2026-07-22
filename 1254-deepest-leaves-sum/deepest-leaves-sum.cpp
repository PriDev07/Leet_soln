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
    int deepestLeavesSum(TreeNode* root) {
       queue<TreeNode*> q;
       q.push(root);
       vector<vector<int>>ans;
       int lvlcnt=0;
       while(!q.empty()){
        int n = q.size();
        ans.push_back({});
        for(int i=0;i<n;i++){
            TreeNode* node = q.front();
            q.pop();
            ans[lvlcnt].push_back(node->val);
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
        }
        lvlcnt++;
       }
       int val=0;
       for(int i=0;i<ans[ans.size()-1].size();i++){
        val+=ans[ans.size()-1][i];
       }
       return val;
    }
};