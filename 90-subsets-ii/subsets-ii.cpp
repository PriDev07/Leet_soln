class Solution {
public:
void solve(vector<int>& nums, int idx, set<vector<int>> &ans, vector<int>&curr){
    if(idx == nums.size()){
        ans.insert(curr);
        return;
    }
    curr.push_back(nums[idx]);
    solve(nums,idx+1,ans,curr);
    curr.pop_back();
    solve(nums,idx+1,ans,curr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>curr;
        solve(nums,0,ans,curr);
        vector<vector<int>>a;
        for(auto it: ans){
            a.push_back(it);
        }
        return a;
    }
};