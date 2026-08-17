class Solution {
public:
    bool solve(vector<int>& nums, int idx, int target,vector<vector<int>>&dp){
        if(target==0) return true;
        if(target<0) return false;
        if(idx==nums.size()) return false;
        if(dp[idx][target]!=-1) return dp[idx][target];
        bool left = solve(nums,idx+1,target-nums[idx],dp);
        bool right = solve(nums,idx+1,target,dp);
        return dp[idx][target] = left | right;
    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        vector<vector<int>>dp(n+1,vector<int>(sum,-1));
        if(sum%2!=0) return false;
        return solve(nums,0,sum/2,dp);
    }
};