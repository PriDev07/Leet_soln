class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpt;
        for(int i=0;i<nums.size();i++){
            mpt[nums[i]]++;
        }
        vector<pair<int,int>>vpt;
        for(const auto& it: mpt){
            vpt.push_back(make_pair(it.second,it.first));
        }
        sort(vpt.begin(),vpt.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            return a.first>b.first;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vpt[i].second);
        }
        return ans;
    }
};