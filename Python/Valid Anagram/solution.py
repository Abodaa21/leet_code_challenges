class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d = dict()
        for c in s:
            if c in d:
                d[c] += 1
            else:
                d.update({c: 1})
        for c in t:
            if c in d and d[c] > 0:
                d[c] -= 1
            else:
                return False
        return True
