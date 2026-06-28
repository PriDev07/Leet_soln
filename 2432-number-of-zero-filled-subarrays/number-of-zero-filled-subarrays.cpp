class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // count element in subarray and then at each subarray last ans+=(n*(n+1)/2)
        long long cnt =0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt++;
            else{
                ans+=cnt*(cnt+1)/2;
                cnt=0;
            }
        }
        ans += cnt*(cnt+1)/2;
        return ans;

    }
};