from typing import List


class Solution:
    def minMoves(self, nums: List[int], limit: int) -> int:
        prefix = [0] * (int(len(nums)/2))
        dct = {}
        for i in range(int(len(nums)/2)):
            prefix[i] = nums[i] + nums[len(nums) - 1 - i]
            
        max = {}
        for i in range(len(prefix)):
            if prefix[i] <= limit:
                max.update(prefix[i]: )


Solution().minMoves([1, 2, 4, 3], 4)

