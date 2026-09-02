from typing import List


class Solution:
    def containsDuplicate(self: "Solution", nums: List[int]) -> bool:
        checker = set()
        for i in nums:
            if i in checker:
                return True
            checker.add(i)
        return False