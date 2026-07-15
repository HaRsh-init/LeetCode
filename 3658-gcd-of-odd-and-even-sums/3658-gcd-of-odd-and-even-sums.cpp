class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b, a%b);
    }
    int gcdOfOddEvenSums(int n) {
        
        int oddSum=n*n, evenSum=n*(n-1);
        return gcd(oddSum, evenSum);
    }
};