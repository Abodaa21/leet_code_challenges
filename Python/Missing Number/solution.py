class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        size = [0] * len(nums)
        for i in range(len(nums)):
            if nums[i] < 0 or nums[i] > len(nums) - 1:
                continue
            else:
                size[nums[i]] = 1
        if 0 in size:
            return size.index(0)
        else:
            return len(nums)
