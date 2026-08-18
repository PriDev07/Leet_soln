class Solution {
public:
int solve(vector<int>& coins,int amount, int idx,vector<vector<int>>& dp){
    if(amount ==0) return 1;
    if(idx>=coins.size() || amount <0) return 0;
    if(dp[idx][amount]!=-1) return dp[idx][amount];
    int take =0;
    for(int i=0;i<coins.size();i++)
        take +=solve(coins,amount - coins[i],0,dp);
    return dp[idx][amount]=take;
}
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        return solve(nums,target,0,dp);
    }
};