class Solution {
public:
    int solve(string& word1, string & word2, int i, int j,vector<vector<int>>&dp){
        if(word1==word2) return 0;
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j]= 0+solve(word1,word2,i-1,j-1,dp);
        int insert = solve(word1,word2,i,j-1,dp); // insert
        int del = solve(word1,word2,i-1,j,dp); //delete
        int rep = solve(word1,word2,i-1,j-1,dp);//replace
        return dp[i][j]=1+ min(insert,min(del,rep));
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        if(word1==word2) return 0;
        return solve(word1,word2,word1.size()-1,word2.size()-1,dp);
    }
};