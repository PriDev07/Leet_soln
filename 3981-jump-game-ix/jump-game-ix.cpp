class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        vector<int>pfxmx(n,0);
        vector<int>sufxmn(n,1e7);
        pfxmx[0]=nums[0];
        for(int i=1;i<n;i++){
            pfxmx[i]=max(pfxmx[i-1],nums[i]);
        }
        sufxmn[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            sufxmn[i]=min(sufxmn[i+1],nums[i]);
        }
        ans[n-1]= pfxmx[n-1];
        for(int i=n-2;i>=0;i--){
            if(pfxmx[i]>sufxmn[i+1]){
                ans[i]=ans[i+1];
            }else{
                ans[i]=pfxmx[i];
            }
        }
        return ans;
    }
};