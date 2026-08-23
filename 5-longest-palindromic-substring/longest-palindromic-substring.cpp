class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;
        int n = s.size();
        for (int i = 0; i < s.size(); i++) {
            // odd length
            int l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r] ) {
                if (r - l + 1 > resLen) {
                    resLen = r - l + 1;
                    res = s.substr(l, r - l+1);
                }
                l--;
                    r++;
            }
            // even length
            l = i; r=i+1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > resLen) {
                    resLen = r - l + 1;
                    res = s.substr(l, r - l +1);
                }
                l--;
                    r++;
            }
        }
        return res;
    }
};