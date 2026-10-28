class Solution:
    def minStartValue(self, nums: list[int]) -> int:
        t = 1 - nums[0]
        min = t
        for i in range(len(nums)):
            t += nums[i]
            if min > t:
                min = t
        t = 1 - nums[0] - min + 1
        return t
