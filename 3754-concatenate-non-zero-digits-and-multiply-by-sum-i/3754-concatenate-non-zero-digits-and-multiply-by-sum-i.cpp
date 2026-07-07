class Solution {
public:
    long long sumAndMultiply(int n) {

        if(n==0) return 0;
        
        long long sum=0;
        string mul="";
        long long num=0;

        while(n>=1){
            sum += n%10;
            if(n%10 != 0) mul += to_string(n%10);

            n /=10;
        }
        reverse(mul.begin(), mul.end());
        num = stoll(mul);
        return num*sum;
    }
};