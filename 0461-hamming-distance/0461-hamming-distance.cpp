class Solution {
public:
    int hammingDistance(int x, int y) {

        long long ans = x^y;

        long count = 0;
        while(ans>1){
            if(ans%2 ==1) count++;
            ans /= 2;
        }
        if(ans == 1) count++;

        return count;
        
    }
};