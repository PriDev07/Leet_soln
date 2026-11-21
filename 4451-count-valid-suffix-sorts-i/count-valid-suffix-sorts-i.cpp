class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<bool>pfx(n,true);
        for(int i=1;i<n;i++){
            pfx[i]=pfx[i-1]&&(nums[i-1]==target[i-1]);
        }
        vector<int>freq(100001,0);
        int ans =0;
        int diff=0;
        bool desc = true;
        for(int i=n-1;i>=0;i--){
            int x = nums[i];
            if(freq[x]==0){
                diff++;
            }else if(freq[x]==-1){
                diff--;
            }
            freq[x]++;
            x = target[i];
            if(freq[x]==0){
                diff++;
            }else if(freq[x]==1){
                diff--;
            }
            freq[x]--;
            if(pfx[i] && desc && diff==0){
                ans++;
            }
            if(i>0 && target[i]>target[i-1]){
                desc=false;
            }
        }
        return ans;
    }
};