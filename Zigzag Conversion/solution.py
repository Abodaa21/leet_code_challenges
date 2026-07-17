class Solution:
    def convert(self, s: str, numRows: int) -> str:
        i = 0
        lst = [[] for _ in range(numRows)]
        zigzag = 0
        while i < len(s):
            zigzag += 1
            if zigzag % 2 != 0:
                for n in range(numRows):
                    if i < len(s):
                        lst[n].append(s[i])
                        i += 1
            else:
                for n in range(numRows):
                    if n % 2 != 0 and i < len(s):
                        lst[n].append(s[i])
                        i += 1
        string = ""
        for n in range(numRows):
            string += "".join(lst[n])
        print(string)
                
Solution().convert("PAYPALISHIRING", 4)
                 