class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 and nums[i]==nums[i-1]) continue;
            int l = i+1, r = n-1;
            while(l<r){
                if(nums[i]+nums[l]+ nums[r]==0) {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l]==nums[l-1] and l<r){
                        l+=1;
                    }
                    while(nums[r]==nums[r+1] and l<r){
                        r-=1;
                    }
                }
                else if((nums[i]+nums[l]+ nums[r])>0) r--;
                else l++;
            }
        }
        return ans;

    }
};