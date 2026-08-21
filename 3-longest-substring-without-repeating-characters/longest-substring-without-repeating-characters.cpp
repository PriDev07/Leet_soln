class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans =0;
        int l = 0;
        int n = s.size();
        int r =0;
        map<char,int>mpt;
        while(r<n){
            if(mpt[s[r]]){
                mpt[s[l]]--;
                l++;
                continue;
            }
            else if(!mpt[s[r]]){
                mpt[s[r]]++;
                ans = max(ans,r-l+1);
                r++;
            }

        }
        return ans;
    }
};