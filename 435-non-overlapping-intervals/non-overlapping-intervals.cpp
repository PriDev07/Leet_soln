class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a, const vector<int>&b){
            return a[1]<b[1];
        });
        int i=0;
        int ans =0;
        for(int j=1;j<intervals.size();j++){
            if(intervals[j][0]<intervals[i][1]){
                ans++;
            }
            else{
                i=j;
            }
        }

        return ans;
    }
};