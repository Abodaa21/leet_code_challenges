from typing import List
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        j = len(matrix) - 1
        for i in range(j):
            for x in range(j):
                matrix[i][x], matrix[j - x][i] = matrix[j - x][i], matrix[i][x]
    
matrix = [[1,2,3],[4,5,6],[7,8,9]]
Solution().rotate(matrix)
# print(matrix)

print(matrix)