class Solution {
public:
void solve(int n , int k, int i,vector<vector<int>>& ans, vector<int>& curr){
    if(k==0){
        ans.push_back(curr);
        return;
    }
    for(int x=i;x<=n;x++){
        curr.push_back(x);
        solve(n,k-1,x+1,ans,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(n,k,1,ans,curr);
        return ans;
    }
};