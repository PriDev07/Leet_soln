class Solution {
public:
    void bactT(vector<int>& candidates, int idx, int target, vector<int> &res,vector<vector<int>> & ans){
        if(idx == candidates.size()){
            if(target==0){
                ans.push_back(res);
            }
            return;
        }
        if(target<0) return;
        res.push_back(candidates[idx]);
        bactT(candidates,idx,target-candidates[idx],res,ans);
        res.pop_back();
        bactT(candidates,idx+1,target,res,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>res;
        bactT(candidates,0,target,res,ans);
        return ans;
    }
};