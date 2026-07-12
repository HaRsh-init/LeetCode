class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:

        new_ar= sorted(set(arr))
        mp = {}
        for i, v in enumerate(new_ar):
           mp[v] = i+1
        
        return [mp[num] for num in arr]

        