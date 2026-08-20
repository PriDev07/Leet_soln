class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i : nums){
            if(st.contains(i)) return 1;
            else st.insert(i);
        }
        return 0;
    }
};