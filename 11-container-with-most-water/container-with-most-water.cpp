class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int ans = INT_MIN;
        while(l<r){
            ans = max(ans, (r-l)*(min(nums[l],nums[r])));
            if(nums[l]<nums[r]) l++;
            else r--;
        }
        return ans;
    }
};