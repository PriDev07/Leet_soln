class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();i++){
            int mini =INT_MAX;
            int bAnd= INT_MAX;
            for(int j=i;j<nums.size();j++){
                mini = min(mini,nums[j]);
                bAnd &= nums[j];
                if(mini == bAnd) ans++;
            }
        }
        return ans;

    }
};