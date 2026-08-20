class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pfx(n);
        vector<int>sfx(n);
        pfx[0]=1;
        sfx[n-1]=1;
        for(int i=1;i<n;i++){
            pfx[i]=pfx[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sfx[i]=sfx[i+1]*nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=pfx[i]*sfx[i];
        }
        return ans;
    }
};