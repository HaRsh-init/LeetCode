class Solution:
    def getPermutation(self, n: int, k: int) -> str:

        s = []
        for i in range(n):
            s.append(i+1)
        
        for _ in range(k-1):
            
            i = n-2
            while i >=0 and s[i] >= s[i+1]:
                i -= 1
            
            if i>=0:
                j = n-1
                while s[j] <= s[i]:
                    j-= 1
                
                s[i], s[j] = s[j], s[i]

            # reverse everything from right to i
            left, right = i+1, n-1
            while left<right:
                s[left], s[right] = s[right], s[left]
                left += 1
                right -= 1 
        
        return "".join(map(str, s))