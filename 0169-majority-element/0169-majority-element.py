class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        hashMap = {}
        maxim = 0

        for i in nums:
            hashMap[i] = hashMap.get(i, 0) + 1
            maxim = max(maxim, hashMap[i])
        
        
        for k in hashMap.keys():
            if hashMap[k] == maxim:
                return k
        
        

        