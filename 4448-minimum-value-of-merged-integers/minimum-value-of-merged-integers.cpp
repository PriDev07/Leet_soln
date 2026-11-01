class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int>v;
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            string x = to_string(nums[i]);
            string y = to_string(nums[i+1]);
            string z = x+y;
            int it = stoi(z);
            v.push_back(it);
        }
        for(int i : v){
            ans = min(ans,i);
        }
        return ans;
    }
};