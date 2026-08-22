class Solution {
public:
    void solve(vector<vector<char>>& grid,vector<vector<int>>& visited, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
    return;
        if(grid[i][j]=='0') return;
        if(visited[i][j]) return;
        visited[i][j]=1;
        solve(grid,visited,i-1,j);
        solve(grid,visited,i+1,j);
        solve(grid,visited,i,j-1);
        solve(grid,visited,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    ans ++;
                    solve(grid,visited,i,j);
                }
            }
        }
        return ans;
    }
};