class Solution {
public:
    void solve(int n, int k,vector<vector<int>>& ans,vector<int>&curr,int idx){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<=n;i++){
            curr.push_back(i);
            solve(n,k,ans,curr,i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>curr;
        solve(n,k,ans,curr,1);
        return ans;
    }
};