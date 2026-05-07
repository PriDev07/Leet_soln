class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        int n =1;
        int total = nums.size()+1;
        for(int i=0;i<total-1;i++){
            st.insert(nums[i]);
        }
        bool check = false;
        while(n<=total){
            if(!st.contains(n)){
                return n;
            }
            n++;
        }
        return n;
    }
};