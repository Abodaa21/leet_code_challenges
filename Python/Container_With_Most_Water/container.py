from typing import List
import heapq


class Solution:
    def maxArea(self, height: List[int]) -> int:
        node = []
        for i in range(len(height)):
            for j in range(1, len(height)):
                n = min(height[i], height[-j])
                heapq.heappush(node, (n * (i - (len(height) - j))))
        result = heapq.heappop(node)
        return result * -1


print(Solution().maxArea([8,7,2,1]))
