class NumArray:

    def __init__(self, nums: list[int]):
        self.nums = nums

    def prefix_sum(self):
        lst = [self.nums[0]]
        for i in range(1, len(self.nums)):
            lst.append(lst[i - 1] + self.nums[i])
        return lst

    def sumRange(self, left: int, right: int) -> int:
        lst = self.prefix_sum()
        if left <= right:
            if left == 0:
                return lst[right] 
            elif left == right:
                return lst[right] - lst[right - 1]
            else:
                return lst[right] - lst[left - 1]



# class NumArray:

#     def __init__(self, nums: list[int]):
#         self.prefix = [ sum(nums[:i+1]) for i in range(len(nums))]

  

#     def sumRange(self, left: int, right: int) -> int:
#         if left == 0: return self.prefix[right]
#         return self.prefix[right] - self.prefix[left-1]


# # Your NumArray object will be instantiated and called as such:
# # obj = NumArray(nums)
# # param_1 = obj.sumRange(left,right)