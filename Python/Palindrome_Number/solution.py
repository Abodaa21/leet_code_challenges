

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        num = list()
        while x != 0:
            num.append(int(x % 10))
            x = int(x / 10)
        i = 0
        for n in num:
            if n != num[-1 - i]:
                return False
            i += 1
        return True


print(Solution().isPalindrome(0))
