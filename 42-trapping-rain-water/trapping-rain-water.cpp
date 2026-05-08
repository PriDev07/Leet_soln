class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(height.size()==0 || height.size()==1) return 0;
        vector<int> maxLeft(n);
        vector<int>maxRight(n);
        maxLeft[0]=0;
        maxLeft[1] = height[0];
        maxRight[n-1]=0;
        maxRight[n-2]=height[n-1];
        for(int i=2;i<n;i++){
            maxLeft[i]=max(maxLeft[i-1],height[i-1]);
        }
        for(int i=n-3;i>=0;i--){
            maxRight[i]=max(maxRight[i+1],height[i+1]);
        }
        vector<int>bothMin(n);
        for(int i=0;i<n;i++){
            bothMin[i]=min(maxLeft[i],maxRight[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(bothMin[i]-height[i]>0){
                ans+=bothMin[i]-height[i];
            }
        }
        return ans;
    }
};