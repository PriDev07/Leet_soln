class Solution {
public:
    bool isPalindromic(string s) {
        string check="";
        for(int i=0;i<s.size();i++){
            string a = bitset<8>(s[i]).to_string();
            check+=a;
        }
        int i = 0,j=check.size()-1;
        while(i<=j){
            if(check[i]!=check[j]) return false;
            i++;j--;
        }
        return true;
    }
};