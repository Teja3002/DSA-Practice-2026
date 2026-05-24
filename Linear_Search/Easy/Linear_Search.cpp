class Solution:
    def linearSearch(self, nums, target):
        lenght=len(nums)
        for i in range(lenght):
            if(nums[i]==target):
                return i
        return -1