#include <bits/stdc++.h>
class Solution {
public:
    int divide(int dividend, int divisor) {
        long n = dividend;
        long d = divisor;
        
        if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        //if(dividend == INT_MIN && divisor > 1)

        if(dividend <  0 && divisor >= 0) sign = false;
        if(dividend >= 0 && divisor <  0) sign = false;
        if(divisor == 1) return dividend;

        n = abs((long)dividend);
        d = abs((long)divisor);

        long res =0;
        while(n >= d){
            long count=0;
            while(n > (d << (count+1))){
                count++;
            }
            res += (1<<count);
            n -= (d<<count);
        }

        if(res > INT_MAX && sign==true ) return INT_MAX;
        if(res > INT_MAX && sign==false) return INT_MIN;

        return sign ? res : (-1*res);
    }
};