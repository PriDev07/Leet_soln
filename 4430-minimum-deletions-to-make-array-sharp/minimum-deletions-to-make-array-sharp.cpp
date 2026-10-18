class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ans=0;
        int i = 0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                ans++;
            }else{
                i=j;
            }
            j++;
        }
        return ans;
    }
};