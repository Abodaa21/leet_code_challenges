class Solution:
    def myAtoi(self, s: str) -> int:
        sign = 1
        if len(s) == 0:
            return 0
        number = 0
        first_time = True
        for c in s:
            if c.isspace() and first_time:
                continue
            if number > 2147483647 and sign == 1:
                return 2147483647
            if number > 2147483648 and sign == -1:
                return -2147483648
            if first_time:
                first_time = not first_time
                if c in ('+', '-'):
                    if c == '-':
                        sign = -1
                    continue
            if c.isdigit():
                number = number * 10 + int(c)
            else:
                return (number * sign)
        if number > 2147483647 and sign == 1:
            return 2147483647
        if number > 2147483648 and sign == -1:
            return -2147483648
        return (number * sign)

print(Solution().myAtoi("21474836460"))