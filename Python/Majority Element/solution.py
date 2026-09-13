class Solution(object):
    def majorityElement(self: "Solution", nums: list) -> int:
        dct = dict()
        if len(nums) % 2 == 0:
            target = int(len(nums) / 2)
        else:
            target = int(len(nums) / 2) + 1
        for i in nums:
            if i in dct:
                dct[i] += 1
                if dct[i] == target:
                    return i
            else:
                dct.update({i: 1})
                print(target, dct)
                if dct[i] == target:
                    return i
