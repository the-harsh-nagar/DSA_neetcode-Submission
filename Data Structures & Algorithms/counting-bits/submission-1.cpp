class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n+1);
        for(int i = 0;i<=n;i++){
            if(i&1) bits[i] = bits[i-1] + 1;
            else bits[i] = bits[i/2];
        }
        return bits;
    }
};
