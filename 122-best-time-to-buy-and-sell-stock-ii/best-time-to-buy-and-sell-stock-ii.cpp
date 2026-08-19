class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int i=0,j=1;
        while(j<prices.size()){
            if(prices[i]<prices[j]){
                ans+=prices[j]-prices[i];
            }
            i++;
            j++;
        }
        return ans;
    }
};