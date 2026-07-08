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
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)return {};
        stack<TreeNode*> st;
        st.push(root);
        stack<bool> visited;
        visited.push(0);
        vector<int>ans;
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            bool flag = visited.top();
            visited.pop();
            if(flag == 0){
                // right
                if(temp->right) {
                    st.push(temp->right);
                    visited.push(0);
                }
                // node
                if(temp) {
                    st.push(temp);
                    visited.push(1);
                }
                // left
                if(temp->left) {
                    st.push(temp->left);
                    visited.push(0);
                }
            }
            else{
                ans.push_back(temp->val);
            }
        }
        return ans;
    }
};