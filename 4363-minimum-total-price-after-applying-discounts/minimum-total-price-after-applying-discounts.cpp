class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n = prices.size();
        int m = discounts.size();
        bool isPrice = prices.size()<discounts.size();
        int x=abs(n-m);
        while(x){
            if(isPrice){
                prices.push_back(0);
            }
            else{
                discounts.push_back(0);
            }
            x--;
        }
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double ans =0;
        for(int i=max(n,m)-1;i>=0;i--){
            ans+=(prices[i]*(100.00-discounts[i]))/100;
        }
        return ans;
        
    }
};