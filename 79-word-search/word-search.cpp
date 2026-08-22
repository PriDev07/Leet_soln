class Solution {
public:
    bool solve(vector<vector<char>>& board, string& word,int r, int c, int i){
        if(r>=board.size() || c>=board[0].size()|| r<0 || c<0) return false;
        if(board[r][c]!=word[i]) return false;
        if(i==word.size()-1) return true;
        char temp = board[r][c];
        board[r][c]= '#';
        bool top = solve(board,word,r-1,c,i+1);
        bool bottom = solve(board,word,r+1,c,i+1);
        bool left = solve(board,word,r,c-1,i+1);
        bool right = solve(board,word,r,c+1,i+1);
        board[r][c]=temp;
        return top || bottom || left || right;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                     if(solve(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};