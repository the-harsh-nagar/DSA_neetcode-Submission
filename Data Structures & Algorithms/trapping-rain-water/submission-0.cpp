class Solution {
public:
    int trap(vector<int>& height) {
        int maxL = INT_MIN;
        int maxR = INT_MIN;
        int water = 0;
        int l = 0;
        int r = height.size()-1;

        while(l<r){
            if(height[l]<height[r]){
                maxL = max(maxL, height[l]);
                water += maxL-height[l];
                l++;
            }
            else{
                maxR = max(maxR, height[r]);
                water += maxR-height[r];
                r--;
            }
        }

        return water;
    }
};
