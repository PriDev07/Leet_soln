class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int start = lower;
        for(auto it:nums){
            if(it<start) continue;
            if(it==start) start++;
            else if(it>start){
                if(start>upper) break;
                int end = min(it-1,upper);
                ans.push_back({start,end});
                start = it+1;
            }
        }
        if(start<=upper){
            ans.push_back({start,upper});
        }
        return ans;
    }
};