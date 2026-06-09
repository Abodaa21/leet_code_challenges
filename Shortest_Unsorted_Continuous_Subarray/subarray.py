from typing import List


class Solution:
    def findUnsortedSubarray(self, nums):
        n = len(nums)
        max_seen = float('-inf')
        end = -1
        # Scan left→right: any element smaller than the running max is "out of order"
        for i in range(n):
            if nums[i] < max_seen:
                end = i          # this element must be inside the subarray
            max_seen = max(max_seen, nums[i])

        min_seen = float('inf')
        start = 0
        # Scan right→left: any element larger than the running min is "out of order"
        for i in range(n - 1, -1, -1):
            if nums[i] > min_seen:
                start = i
            min_seen = min(min_seen, nums[i])

        return end - start + 1 if end != -1 else 0
print(Solution().findUnsortedSubarray([2, 1, 4, 2, 5]))