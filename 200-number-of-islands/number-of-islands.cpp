class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<bool>> &visited, int row, int col){
        int n = grid.size();
        int m = grid[0].size();
        int sr[] = {-1,1,0,0};
        int sc[] = {0,0,-1,1};
        queue<pair<int,int>>q;
        q.push({row,col});
        visited[row][col]=1;
        while(!q.empty()){
            auto [r,c]= q.front();
            q.pop();
            for(int k=0;k<4;k++){
            int rowCheck = r+sr[k];
            int colCheck = c+sc[k];
            if(rowCheck>=0 && rowCheck <n && colCheck>=0 && colCheck<m && !visited[rowCheck][colCheck] && grid[rowCheck][colCheck]=='1'){
                visited[rowCheck][colCheck]=1;
                q.push({rowCheck,colCheck});
            }
        }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans =0;
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    bfs(grid,visited,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};