class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i, int j, int ans, set<pair<int,int>>& visited){
        if(visited.contains({i,j})) return 0;
        if(i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 || i<0 || j<0 ){
            return 1;
        }
        visited.insert({i,j});
        return dfs(grid,i+1,j,ans,visited)+ dfs(grid,i,j+1,ans,visited)+ dfs(grid,i-1,j,ans,visited)+ dfs(grid,i,j-1,ans,visited);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        set<pair<int,int>> visited;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    return dfs(grid,i,j,0,visited);
                }
            }
        }
        return 0;
    }
};