from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        stock = float("inf")
        sells = 0
        i = 0
        while i < len(prices):
            if stock >= prices[i]:
                stock = prices[i]
            else:
                while i < len(prices) - 1 and (stock >= prices[i] or (i + 1 < len(prices) and prices[i] < prices[i + 1])):
                    i += 1
                if i == len(prices) - 1 and prices[i] <= stock:
                    return sells

                sells += prices[i] - stock
                stock = float("inf")
            i += 1
        return sells


print(Solution().maxProfit([8,6,4,3,3,2,3,5,8,3,8,2,6]))