from typing import List


class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        nums2 = sorted(nums)
        print(nums2)
        start, end = 0, len(nums2)
        for i in range(len(nums)):
            if nums[i] != nums2[i]:
                start = i
                for i in range(1, len(nums)):
                    if nums[-i] != nums2[-i]:
                        end = len(nums2) - i + 1
                        return len(nums[start:end])
                return len(nums[start:])
        return 0

print(Solution().findUnsortedSubarray([2, 1]))