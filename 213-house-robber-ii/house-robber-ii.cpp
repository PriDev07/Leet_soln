class Solution {
public:
    int f(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0) return nums[0];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx]+f(idx-2,nums,dp);
        int notPick=0+f(idx-1,nums,dp);
        return dp[idx]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
         int n = nums.size();
         if(n==1) return nums[0];
         vector<int>temp1,temp2;
         vector<int>dp1(n-1,-1),dp2(n-1,-1);
         for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
         }
         int n1=temp1.size();
         int n2=temp2.size();
         return max(f(n1-1,temp1,dp1),f(n2-1,temp2,dp2));
    }
};