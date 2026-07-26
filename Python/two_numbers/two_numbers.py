from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        result = 0
        for i in l1:
            result = result * 10 + i
        result_2 = 0
        for i in l2:
            result_2 = result_2 * 10 + i
        result += result_2
        if result == 0:
            return [0]
        output = []
        while result != 0:
            output.append(int(result % 10))
            result = int(result / 10)
        return output

print(Solution().addTwoNumbers([0], [0]))