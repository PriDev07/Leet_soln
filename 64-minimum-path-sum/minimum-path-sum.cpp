class Solution {
public:
    int solve(vector<vector<int>>& grid,int i, int j, vector<vector<int>> & dp){
        if(i==0 && j==0) return dp[i][j]=grid[i][j];
        if(i<0 || j<0) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = solve(grid,i-1,j,dp);
        int top = solve(grid,i,j-1,dp);
        return dp[i][j]= grid[i][j]+ min(left,top);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(grid,n-1,m-1,dp);
    }
};