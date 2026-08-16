class Solution {
public:
    int solve(vector<int>&dp, vector<int>& cost, int idx){
        if(idx>=cost.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int left = solve(dp,cost,idx+1);
        int right = solve(dp,cost,idx+2);
        return dp[idx]=cost[idx]+min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(solve(dp,cost,0),solve(dp,cost,1));
    }
};