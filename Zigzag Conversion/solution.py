class Solution:
    def convert(self: "Solution", s: str, numRows: int) -> str:
        i = 0
        lst = [[] for _ in range(numRows)]
        while i < len(s):
            for n in range(numRows):
                if i < len(s):
                    lst[n].append(s[i])
                    i += 1
            for n in range(numRows):
                if i < len(s) and numRows - n - 2 > 0:
                    lst[numRows - n - 2].append(s[i])
                    i += 1
        string = ""
        for n in range(numRows):
            string += "".join(lst[n])
        return string


Solution().convert("PAYPALISHIRING", 4)
