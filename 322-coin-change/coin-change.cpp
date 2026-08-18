class Solution {
public:
int solve(vector<int>& coins, int amount, int idx,vector<vector<long long>>&dp){
    if(amount ==0) return 0;
    if(idx >= coins.size() || amount < 0)
        return 1e9;
    if(dp[idx][amount]!=-1) return dp[idx][amount];
    int take =0;
    for(int i=idx;i<coins.size();i++){
        take = 1+ solve(coins,amount - coins[idx],idx,dp);
    }
    int notTake = solve(coins,amount,idx+1,dp);
    return dp[idx][amount]=min(take,notTake);
}
    int coinChange(vector<int>& coins, int amount) {
    vector<vector<long long>>dp(coins.size(),vector<long long>(amount+1,-1));
    int ans = solve(coins, amount, 0,dp);
    return ans >= 1e9 ? -1 : ans;
    }
};