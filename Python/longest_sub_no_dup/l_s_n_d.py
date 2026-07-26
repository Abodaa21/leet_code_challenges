class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        count = 0
        lst = []
        max = 0
        for i in s:
            if i in lst:
                if max < count:
                    max = count
                idx = lst.index(i)
                if i == lst[-1]:
                    count = 0
                    lst = []
                else:
                    lst.pop(idx)
                    count = count - idx - 1
            count += 1
            lst.append(i)
        if count > max:
            max = count
        return max

print(Solution().lengthOfLongestSubstring("pwwkew"))
