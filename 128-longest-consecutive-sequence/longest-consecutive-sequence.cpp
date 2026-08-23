class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cntcurr=0;
        if(nums.size()==0) return 0;
        int longest = 1;
        int curr = INT_MIN+1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==curr+1){
                curr = nums[i];
                cntcurr++;
                longest = max(longest, cntcurr);
                continue;
            }
            else if(nums[i]==curr) continue;
            else if(nums[i]!=curr) {
                cntcurr=1;
                curr = nums[i];
            }
        }
        return longest;
    }
};