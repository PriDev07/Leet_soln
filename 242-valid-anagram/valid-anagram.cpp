class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s_hash(26,0), t_hash(26,0);
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            s_hash[s[i]-'a']+=1;
            t_hash[t[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(s_hash[i]!=t_hash[i]) return false;
        }
        return true;
    }
};