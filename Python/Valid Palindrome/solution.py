class Solution:
    def isPalindrome(self, s: str) -> bool:
        t = ""
        for i in s:
            if i.isalpha() or i.isnumeric():
                t += i
        t = t.lower()
        return t == t[::-1]