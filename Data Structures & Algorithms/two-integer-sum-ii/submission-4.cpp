class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(l<r){
            int sum = numbers[l]+numbers[r];
            if(sum == target) return {l+1,r+1};
            while(l<r && sum > target){
                r--;
                sum = numbers[l]+numbers[r];
            }
            
            while(l<r && sum < target){
                l++;
                sum = numbers[l]+numbers[r];
            }
        }
        return {};
    }
};
