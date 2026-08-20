class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<= 'z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9')) x+=tolower(s[i]);
        }
        int i =0,j=x.size()-1;
        while(i<j){
            if(x[i]!=x[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
};