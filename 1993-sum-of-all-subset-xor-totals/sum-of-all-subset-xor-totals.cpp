class Solution {
public:
    int xorSum(vector<int>& v){
        int x=0;
        for(int i=0;i<v.size();i++){
            x= x^ v[i];
        }
        return x;
    }
    void solve(vector<int>& nums, int idx, vector<int>&curr, int& ans){
        if(idx==nums.size()){
            ans+=xorSum(curr);
            return;
        }
        curr.push_back(nums[idx]);
        solve(nums,idx+1,curr,ans);
        curr.pop_back();
        solve(nums,idx+1,curr,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>curr;
        int ans =0;
        solve(nums,0,curr,ans);
        return ans;
    }
};