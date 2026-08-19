class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans =0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        if(tokens.size()==0||tokens[i]>power) return 0;
        while(i<=j){
            if(tokens[i]<=power){
                ans+=1;
                power-=tokens[i];
                i++;
            }else{
                power+=tokens[j];
                if(i!=j)ans-=1;
                j--;
            }
        }
        return ans;
    }
};