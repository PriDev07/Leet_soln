class Solution {
public:
    int solve(vector<int>& nums, int idx,vector<int>& dp){
        if(idx==0) return nums[0];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int left = nums[idx]+solve(nums,idx-2,dp);
        int right = solve(nums,idx-1,dp);
        return dp[idx]=max(left,right);
    }
    int rob(vector<int>& nums) {
         vector<int>temp1,temp2;
         int n = nums.size();
         if(n==1) return nums[0];
         vector<int>dp1(n-1,-1),dp2(n-1,-1);
         for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
         }
         return max(solve(temp1,n-2,dp1),solve(temp2,n-2,dp2));
    }
};