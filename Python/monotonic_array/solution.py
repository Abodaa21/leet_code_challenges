from typing import List


class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        if len(nums) == 0:
            return True
        previous = nums[0]
        first_time = 1
        increasing = 0
        decreasing = 0
        for n in nums:
            if first_time:
                if n < previous:
                    first_time = 0
                    decreasing = 1
                elif n > previous:
                    first_time = 0
                    increasing = 1
            if (decreasing and n > previous) or (increasing and n < previous):
                return False
            previous = n
        return True


                
