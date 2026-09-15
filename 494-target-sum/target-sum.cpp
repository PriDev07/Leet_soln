class Solution {
public:
    int solve(vector<int>& nums, int target,int idx,int curr){
        if(idx==nums.size() && curr==target){
            return 1;
        }
        if(idx==nums.size()){
            return 0;
        }
        int add=solve(nums,target,idx+1,curr+nums[idx]);
        int subtract=solve(nums,target,idx+1,curr-nums[idx]);
        return add+subtract;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};