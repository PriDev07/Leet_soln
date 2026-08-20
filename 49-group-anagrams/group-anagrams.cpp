class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        vector<vector<string>>ans;
        vector<pair<string,int>>vst;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            vst.push_back(make_pair(s,i));
        }
        sort(vst.begin(),vst.end());
        for(auto it:vst){
            cout<<it.first<<" "<<it.second;
        }
        vector<string>vt;
        sort(vst.begin(),vst.end());
        for(int i=0;i<vst.size();i++){
            if(vt.size()==0){
                vt.push_back(strs[vst[i].second]);
            }
            else{
                if(vst[i].first==vst[i-1].first){
                    vt.push_back(strs[vst[i].second]);
                }
                else{
                    ans.push_back(vt);
                    vt={};
                    vt.push_back(strs[vst[i].second]);
                }
            }
        }
        if(vt.size()!=0) ans.push_back(vt);
        return ans;
    }
};