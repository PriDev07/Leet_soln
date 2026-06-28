class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};