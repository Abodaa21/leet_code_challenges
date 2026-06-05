from __future__ import annotations
import heapq
from typing import List
from collections import defaultdict


class Solution:
    def minJumps(self: Solution, arr: List[int]) -> int:
        q = [(0, 0, arr[0])]
        heapq.heapify(q)
        visited = set()
        while q:
            count, idx, element = heapq.heappop(q)
            if (idx, element) == (len(arr) - 1, arr[len(arr) - 1]):
                return count
            if (idx, element) in visited:
                continue
            visited.add((idx, element))
            if idx + 1 < len(arr):
                q.append((count + 1, idx + 1, arr[idx + 1]))
            if idx - 1 >= 0:
                q.append((count + 1, idx - 1, arr[idx - 1]))
            j = idx       
            while arr[j] in arr[j + 1:]:
                j = arr.index(arr[j], j + 1, len(arr))
                heapq.heappush(q, (count + 1, j, arr[j]))   
        return 0

arr = [25,-28,-51,61,-74,-51,-30,58,36,68,-80,-64,25,-30,-53,36,-74,61,-100,-30,-52]

print(Solution().minJumps(arr))
x = int()
print(x)
tags = defaultdict(set)
tags["python"].add("language")
tags["python"].add("language")  # duplicate ignored
print(tags["python"])
