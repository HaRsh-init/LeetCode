class Solution:
    def sortColors(self, nums: List[int]) -> None:
        
        a, b, c = 0, 0, 0
        for i in nums:
            if i == 0: a +=1
            elif i == 1: b += 1
            else: c += 1
        
        for i in range(a):
            nums[i] = 0
        for i in range(a, a+b):
            nums[i] = 1
        for i in range(len(nums)-c, len(nums)):
            nums[i] = 2

        