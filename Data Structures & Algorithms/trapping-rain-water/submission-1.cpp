class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, n = height.size();
        int s = 0;
        while(i < n - 1){
            int j = i + 1;
            int k = 0;
            int nh = -1;
            while(j < n - 1 && height[j] < height[i]){
                k += height[i] - height[j];
                nh = std::max(height[j], nh);
                j++;
            }
            if(j == n - 1 && height[j] < height[i]){
                height[i] = std::max(height[j], nh);
                continue;
            }
            i = j;
            s += k;
        }
        return s;
    }
};
