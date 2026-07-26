import heapq
from typing import List


class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        n = 0
        for i in range(int(len(nums) / 2)):
            num = nums.pop()
            num2 = nums.pop()
            n += min(num, num2)
        return n
print(Solution().arrayPairSum([6,2,6,5,1,2]))
