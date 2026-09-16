class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        s = {i for i in nums1}
        lst = set()
        for i in nums2:
            if i in s:
                lst.add(i)
        return list(lst)
