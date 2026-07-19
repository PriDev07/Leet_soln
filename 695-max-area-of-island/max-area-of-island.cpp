class Solution {
public:

    int bfs(vector<vector<int>>& grid,vector<vector<bool>>visited,int row,int col){
        int n = grid.size();
        int m = grid[0].size();
        int sr[]={0,0,-1,1};
        int sc[]= {-1,1,0,0};
        int cnt =1;
        queue<pair<int,int>>q;
        q.push({row,col});
        visited[row][col]=1;
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int rowCheck = r+sr[i];
                int colCheck = c+sc[i];
                if(rowCheck>=0 && rowCheck<n && colCheck>=0 && colCheck<m && !visited[rowCheck][colCheck] && grid[rowCheck][colCheck]==1){
                    visited[rowCheck][colCheck]=1;
                    cnt++;
                    q.push({rowCheck,colCheck});
                }
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans =0;
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    ans = max(ans,bfs(grid,visited,i,j));
                }
            }
        }
        return ans;
    }
};