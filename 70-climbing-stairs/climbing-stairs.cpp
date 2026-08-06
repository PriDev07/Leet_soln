class Solution {
public:
    int fib(int n,vector<int> & val){
        if(n==0 || n==1) return 1;
        if(val[n]!=-1) return val[n];
        return val[n]=fib(n-1,val)+fib(n-2,val);
    }
    int climbStairs(int n) {
        vector<int>val(n+1,-1);
        int ans = fib(n,val);
        return ans;
    }
};