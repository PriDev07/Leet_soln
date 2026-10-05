class Solution {
public:
    int minRotations(string s) {
        int ans =0;
        int curr = 0;
        for(int i=0;i<s.size();i++){
            int diff = abs(curr-(s[i]-'0'));
            ans += min(diff,10-diff);
            curr=(s[i]-'0');
        }
        return ans;
    }
};