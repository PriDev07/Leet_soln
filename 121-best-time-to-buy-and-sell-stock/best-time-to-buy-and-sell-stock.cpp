class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int l=0,r = 1;
        int ans=0;
        while(r<nums.size()){
            if(nums[r]<nums[l]){
                l=r;
                r++;
            }
            else{
                ans=max(ans,nums[r]-nums[l]);
                r++;
            }
        }
        return ans;
    }
};