class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
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
# i found that the best solution in this case is those two simple lines
#class Solution:
    # def rotateString(self, s: str, goal: str) -> bool:
   #     return len(s)==len(goal) and goal in (s+s)
# and when i try to irrotate the best thing is to do s[1:] + s[0] instead my loop