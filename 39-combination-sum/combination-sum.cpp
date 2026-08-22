class Solution {
public:
    void solve(vector<int>& candidates, int target,int idx, vector<vector<int>>& ans, vector<int>& curr){
        if(target==0) ans.push_back(curr);
        if(idx==candidates.size()) return;
        if(target<0) return;
        for(int i=idx;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(candidates,target,0,ans,curr);
        return ans;
    }
};