class Solution:
    def rotateString(self: "Solution", s: str, goal: str) -> bool:
        j = 0
        if len(s) != len(goal):
            return False
        if len(s) == 0 and len(goal) == 0:
            return True
        while (j < len(goal)):
            string = ""
            for i in range(len(s)):
                string += s[i - 1]
            if string == goal:
                return True
            else:
                s = string
            j += 1
        return False
