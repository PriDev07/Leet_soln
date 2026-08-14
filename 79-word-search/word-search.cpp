class Solution {
public:
    bool isWord(vector<vector<char>>& board, string word,int i,int j,int idx){
        if(idx==word.size()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()) return false;
        if(board[i][j]!= word[idx]) return false;
        char temp = board[i][j];
        board[i][j]='#';
        bool found = isWord(board,word,i-1,j,idx+1)|| isWord(board,word,i+1,j,idx+1) ||isWord(board,word,i,j-1,idx+1) || isWord(board,word,i,j+1,idx+1);
        board[i][j]=temp;
        return found;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(isWord(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};