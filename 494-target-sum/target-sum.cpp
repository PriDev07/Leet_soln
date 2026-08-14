class Solution {
public:
    int solve(vector<int>& nums, int target,int idx,int ans){
        if(idx==nums.size()){
            if(target==0){
            return 1;
            }
            return 0;
        }
        ans += solve(nums,target-nums[idx],idx+1,ans) + solve(nums,target+nums[idx],idx+1,ans);
        return ans;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};