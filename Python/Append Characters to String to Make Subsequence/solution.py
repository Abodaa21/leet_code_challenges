class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        s_c = 0
        t_c = 0
        while s_c < len(s) and t_c < len(t):
            if s[s_c] == t[t_c]:
                t_c += 1
            s_c += 1
        return len(t) - t_c