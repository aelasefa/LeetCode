from collections import Counter

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = Counter(nums)
        freq = list(mp.items())
        freq.sort(key=lambda x: (x[1], x[0]), reverse=True)

        res = list()
        for i in range(k):
            res.append(freq[i][0])
        return res
