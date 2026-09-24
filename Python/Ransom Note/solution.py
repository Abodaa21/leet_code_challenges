class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        dct = dict()
        for i in magazine:
            if i in dct:
                dct[i] += 1
            else:
                dct[i] = 1
        for i in ransomNote:
            if i in dct and dct[i] != 0:
                dct[i] -= 1
            else:
                return False
        return True