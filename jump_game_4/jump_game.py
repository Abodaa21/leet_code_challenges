from typing import List


class Solution:
    def minJumps(self, arr: List[int]) -> int:
        count = 0
        q = [(0, arr[0], count)]
        visited = set()
        while q:
            idx, element, count = q.pop()
            if (idx, element) == (len(arr) - 1, arr[len(arr) - 1]):
                return count
            if (idx, element) in visited:
                continue
            visited.add((idx, element))
            
            if idx + 1 < len(arr):
                q.append((idx + 1, arr[idx + 1], count + 1))
            if idx - 1 >= 0:
                q.append((idx - 1, arr[idx - 1], count + 1))
            if idx != 0 and arr[idx] in arr[:idx]:
                j_idx = arr.index(arr[idx], 0, idx)
                q.append((j_idx, arr[j_idx], count + 1))
            if idx + 1 < len(arr) and arr[idx] in arr[idx + 1:]:
                j_idx = arr.index(arr[idx], idx + 1, len(arr) - 1)
                q.append((j_idx, arr[j_idx], count + 1))
arr = [100,-23,-23,404,100,23,23,23,3,404]

print(Solution().minJumps(arr))
