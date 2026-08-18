class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid, int i, int j,vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(obstacleGrid[i][j]==1) return dp[i][j]=0;
        if(i==0 && j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = solve(obstacleGrid,i-1,j,dp);
        int right = solve(obstacleGrid,i,j-1,dp);
        return dp[i][j]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(obstacleGrid,n-1,m-1,dp);
    }
};