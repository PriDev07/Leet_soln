class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        //Find height of the tree
        // And then traverse the nums array with the given formula and height h 

        // Adjacency list
        int n = parent.size();
        vector<vector<int> > adj(n);
        for(int i=1;i<n;i++){
            adj[parent[i]].push_back(i);
        }
        vector<int>dep(n,0);
        dep[0]=1;
        int h =0;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            h = max(dep[node],h);
            for(int it : adj[node]){
                dep[it]=dep[node]+1;
                q.push(it);
            }
        }
        long long sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]*1LL*(h-dep[i]+1);
        }
        return sum;
    }
};