from typing import List


class Solution:
    def findUnsortedSubarray(self: "Solution", nums: List) -> int:
        n = len(nums)
        max_seen = float('-inf')
        end = -1
        for i in range(n):
            if nums[i] < max_seen:
                end = i
            max_seen = max(max_seen, nums[i])

        min_seen = float('inf')
        start = 0
        for i in range(n - 1, -1, -1):
            if nums[i] > min_seen:
                start = i
            min_seen = min(min_seen, nums[i])

        return end - start + 1 if end != -1 else 0
