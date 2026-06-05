from __future__ import annotations
from typing import List
from collections import deque


class Solution:
    def canReach(self: Solution, arr: List[int], start: int) -> bool:
        if 0 not in arr or start >= len(arr) or start < 0:
            return False
        path = deque([(start, arr[start])])
        visited = set()
        while path:
            idx, value = path.popleft()
            if value == 0:
                return True
            if (idx, value) in visited:
                continue
            visited.add((idx, value))
            if idx - value >= 0:
                path.append((idx - value, arr[idx - value]))
            if idx + value < len(arr):
                path.append((idx + value, arr[idx + value]))
        return False


print(Solution().canReach([4, 4, 1, 3, 0, 3], 2))
