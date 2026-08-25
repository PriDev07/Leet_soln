class Solution {
public:
    int solve(vector<int>& nums, int idx,vector<int>& dp){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int left = nums[idx]+solve(nums,idx-2,dp);
        int right = solve(nums,idx-1,dp);
        return dp[idx]=max(left,right);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,nums.size()-1,dp);
    }
};