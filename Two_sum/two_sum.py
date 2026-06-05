from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dct = {}
        for i, num in enumerate(nums):
            if num >= target:
                continue
            if num in dct:
                return [dct[num], i]
            else:
                dct[target - num] = i
        return []

print(Solution().twoSum([3,3], 6))