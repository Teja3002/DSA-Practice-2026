class Solution:
    def missingNumber(self, nums):
        n=len(nums)
        require=n * (n+1)//2
        expected=sum(nums)

        return require-expected