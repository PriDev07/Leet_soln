class Solution {
public:
    bool solve(vector<vector<char>>& board, string word, int idx, int i,int j){
        if(idx==word.size()) return true;
        if(i>=board.size() || j>=board[0].size() || i <0 || j<0) return false;
        if(board[i][j]!= word[idx]) return false; 
        char curr = board[i][j];
        board[i][j]='#';
        bool found = solve(board,word,idx+1,i+1,j) || solve(board,word,idx+1,i,j+1) ||solve(board,word,idx+1,i-1,j) || solve(board,word,idx+1,i,j-1);
        board[i][j]=curr;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(solve(board,word,0,i,j)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};