class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mpt;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mpt.contains(target-arr[i])){
                ans.push_back(mpt[target-arr[i]]);
                ans.push_back(i);
            }else{
                mpt[arr[i]]=i;
            }
        }
        return ans;
    }
};