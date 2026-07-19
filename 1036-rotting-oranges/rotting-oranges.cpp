class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans =-1;
        int n = grid.size();
        int m = grid[0].size();
        int sr[]={0,0,-1,1};
        int sc[] = {-1,1,0,0};
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int cnt =0;
        while(!q.empty()){
            bool changed = false;
            int sz = q.size();
            while(sz--){
                auto [r,c] = q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int rowCheck = r+sr[i];
                    int colCheck = c+sc[i];
                    if(rowCheck>=0 && rowCheck<n && colCheck>=0 && colCheck<m && grid[rowCheck][colCheck]==1){
                        grid[rowCheck][colCheck]=2;
                        q.push({rowCheck,colCheck});
                        changed = true;
                    }
                }
            }
            if (changed)cnt++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return cnt;
    }
};