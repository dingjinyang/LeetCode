#
# @lc app=leetcode.cn id=41 lang=python3
#
# [41] 缺失的第一个正数
#
from typing import List


# @lc code=start
class Solution:
    # 负号做标记
    # def firstMissingPositive(self, nums: List[int]) -> int:
    #     n = len(nums)
    #     for i in range(n):
    #         if nums[i] <= 0:
    #             nums[i] = n+1

    #     for i in range(n):
    #         num = abs(nums[i])
    #         if num <= n:
    #             nums[num - 1] = -abs(nums[num - 1])

    #     for i in range(n):
    #         if nums[i] > 0:
    #             return i+1

    #     return n+1

    # 置换
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            while 1 <= nums[i] <= n and nums[i] != nums[nums[i] - 1]:
                nums[nums[i] - 1], nums[i] = nums[i], nums[nums[i] - 1]
        for i in range(n):
            if nums[i] != i+1:
                return i+1
        return n+1

# @lc code=end
