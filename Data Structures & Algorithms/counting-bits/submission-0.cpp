class Solution {
public:

    int countOneBits(int n){
        int c = 0;
        while(n){
            c++;
            n &= (n-1);
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> bits(n+1,1);
        for(int i = 0;i<=n;i++){
            bits[i] = countOneBits(i);
        }
        return bits;
    }
};
