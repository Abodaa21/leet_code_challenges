class Solution:
    def lengthOfLastWord(self: "Solution", s: str) -> int:
        lst = s.split()
        return len(lst[-1])
