class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 1;
        int mxarea = 0;
        int lf = 0;
        int rg = n-1;
        while(lf<rg){
            int wid = abs(lf-rg);
            int len = min(height[lf],height[rg]);
            area = len*wid;
            mxarea = max(mxarea,area);
             if(height[lf]<height[rg]){
                lf++;
            }
            else{
                rg--;
            }
            }
       
        return mxarea;
    }
};