class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        nums1.sort()
        nums2.sort()
        count = 0
        lst = []
        for i in range(len(nums1)):
            while (count < len(nums2) and nums1[i] > nums2[count]):
                count += 1
            if count < len(nums2) and nums1[i] == nums2[count]:
                lst.append(nums2[count])
                count += 1
        return lst
