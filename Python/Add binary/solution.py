class Solution:
    def addBinary(self: "Solution", a: str, b: str) -> str:
        num1 = int(a, base=2)
        num2 = int(b, base=2)
        num = num1 + num2
        if num == 0:
            return "0"
        lst = []
        while 0 < num:
            lst.append(str(num % 2))
            num = num // 2

        lst.reverse()
        "".join(lst)
        return "".join(lst)
