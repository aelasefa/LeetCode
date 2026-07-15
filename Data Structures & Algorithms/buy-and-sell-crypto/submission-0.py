class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        maxP = 0
        for i in range(n - 1):
            currentP = 0
            j = i + 1
            while j < n:
                currentP = prices[j] - prices[i]
                j += 1
                maxP = max(maxP, currentP)
        return maxP