class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int h = heights.size()-1;
        int maxWater = 0;

        while(l<h){
            int quantity = min(heights[l],heights[h])*(h-l);
            maxWater = max(maxWater, quantity);

            if(heights[l]<heights[h]) l++;
            else h--;
        }
        return maxWater;
    }
};
