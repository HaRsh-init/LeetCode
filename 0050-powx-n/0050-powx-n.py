class Solution:
    def power(self, x, n):
        if n == 0: return 1

        half = self.power(x, n//2)

        if n%2 == 0:
            return half*half
        else: return half*half*x

    def myPow(self, x: float, n: int) -> float:

        if n< 0:
            return 1/self.power(x,-n)
        
        return self.power(x, n)
        
        