class Solution {
public:
    int solve(vector<vector<int>>& pairs, int curr, int prev,vector<vector<int>>& dp){
        if(curr == pairs.size()) return 0;
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
        int notTake = 0 + solve(pairs,curr+1,prev,dp);
        int take =0;
        if(prev==-1 || pairs[prev][1]<pairs[curr][0]){
            take = 1+solve(pairs,curr+1,curr,dp);
        }
        return dp[curr][prev+1]=max(take,notTake);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        vector<vector<int>>dp(pairs.size(),vector<int>(pairs.size(),-1));
        return solve(pairs,0,-1,dp);
    }
};