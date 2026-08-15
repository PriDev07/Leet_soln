class Solution {
public:
    void solve(vector<string> & ans,string & curr, int open, int close){
        if(open ==0 && close ==0){
            ans.push_back(curr);
            return;
        }
        if(open >0){
            curr.push_back('(');
            solve(ans,curr,open-1,close);
            curr.pop_back();
        }
        if(close>0 && open < close){
            curr.push_back(')');
            solve(ans,curr,open,close-1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr;
        solve(ans,curr,n,n);
        return ans;
    }
};