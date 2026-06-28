class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt =0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                nums[j]=-101;
                cnt++;
            }
            else{
                i=j;
            }
        }
        int x=0;
        for(int y=0;y<nums.size();y++){
            if(nums[y]!=-101){
                swap(nums[y],nums[x]);
                x++;
            }
        }
        return nums.size()-cnt;
    }
};