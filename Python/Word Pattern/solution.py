class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        lst = s.split()
        if len(lst) != len(pattern):
            return False
        dct = dict()
        check = set()
        for index, i in enumerate(pattern):
            if i in dct:
                if dct[i] != lst[index]:
                    return False
            else:
                dct[i] = lst[index]
                if lst[index] in check:
                    return False
                check.add(lst[index])
        return True
