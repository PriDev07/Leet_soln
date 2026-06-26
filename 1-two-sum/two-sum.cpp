class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpt;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(mpt.contains(target-nums[i])){
                ans.push_back(i);
                ans.push_back(mpt[target-nums[i]]);
            }else{
                mpt[nums[i]]=i;
            }
        }
        return ans;
    }
};