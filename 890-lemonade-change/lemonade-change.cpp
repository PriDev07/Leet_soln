class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten =0;
        int twenty =0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five+=1;
            else if(bills[i]==10){
                five-=1;
                ten++;
            }
            else{
                if(ten<=0){
                    five-=3;
                    twenty++;
                }
                else{
                    five -=1;
                    ten-=1;
                    twenty++;
                }
            }
            if(five<0 || ten<0 || twenty<0) return 0;
        }
        return 1;
    }
};