class Solution {
public:
    vector<int>bfs(vector<vector<char>>& grid,vector<vector<bool>>&visited,int l, int r, int lastL, int lastR){
        if (l < 0 || l >= grid.size() ||r < 0 || r >= grid[0].size()) {return {lastL, lastR};}
        if(visited[l][r]!=0) return {lastL,lastR};
        visited[l][r]=1;
        if(grid[l][r]=='L'){
            lastL=l;lastR=r;
            return bfs(grid,visited,l,r-1,lastL,lastR);
        }
        else if(grid[l][r]=='R'){
            lastL=l;lastR=r;
            return bfs(grid,visited,l,r+1,lastL,lastR);
        }
        else if(grid[l][r]=='U'){
            lastL=l;lastR=r;
            return bfs(grid,visited,l-1,r,lastL,lastR);
        }
        else{
            lastL=l;lastR=r;
            return bfs(grid,visited,l+1,r,lastL,lastR);
        }
    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        return bfs(grid,visited,0,0,0,0);
    }
};