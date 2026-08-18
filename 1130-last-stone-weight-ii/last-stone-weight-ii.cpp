class Solution {
public:
    int solve(vector<int>& stones, int idx, int sum, int total,vector<vector<int>>&dp){
        if(idx==stones.size()-1){
            return abs(sum-(total-sum));
        }
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        int take = solve(stones,idx+1,sum+stones[idx],total,dp);
        int notTake = solve(stones,idx+1,sum,total,dp);
        return dp[idx][sum]=min(take,notTake);        
    }
    int lastStoneWeightII(vector<int>& stones) {
        int total = accumulate(stones.begin(),stones.end(),0);
        vector<vector<int>>dp(stones.size(),vector<int>(total,-1));
        return solve(stones,0,0,total,dp);
    }
};