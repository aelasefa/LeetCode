class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        output = []
        for i in range(length):
            result = 1
            j  =  0
            while j < length:
                if i != j:
                    result = result * nums[j]
                j += 1
            output.append(result)
        return output