class Solution {
public:
    int solve(vector<int>& nums, int target, int idx){
        if(idx==nums.size()){
            if(target==0) return 1;
            else return 0;
        }
        int take = solve(nums,target-nums[idx],idx+1);
        int notTake = solve(nums,target+nums[idx],idx+1);
        return take+notTake;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0);
    }
};