class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpt;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mpt.contains(target-nums[i])){
                return {mpt[target-nums[i]],i};
            }else{
                mpt[nums[i]]=i;
            }
        }
        return {};
    }
};