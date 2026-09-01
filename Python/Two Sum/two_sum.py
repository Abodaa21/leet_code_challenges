from typing import List


class Solution:
    def twoSum(self: "Solution", nums: List[int], target: int) -> List[int]:
        seen = {}
        for index, number in enumerate(nums):
            component = target - number
            if component in seen:
                return [min(index, seen[component]), max(index, seen[component])]
            seen.update({number: index})
        return []
