class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mpt;
        for(int i=0;i<nums.size();i++){
            if(mpt.contains(target-nums[i])){
                ans.push_back(mpt[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else{
                mpt[nums[i]]=i;
            }
        }
        return {};
    }
};