/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 *
 * https://leetcode-cn.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (37.62%)
 * Likes:    349
 * Dislikes: 0
 * Total Accepted:    117.6K
 * Total Submissions: 312.5K
 * Testcase Example:  '4'
 *
 * 实现 int sqrt(int x) 函数。
 * 
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 * 
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 * 
 * 示例 1:
 * 
 * 输入: 4
 * 输出: 2
 * 
 * 
 * 示例 2:
 * 
 * 输入: 8
 * 输出: 2
 * 说明: 8 的平方根是 2.82842..., 
 * 由于返回类型是整数，小数部分将被舍去。
 * 
 * 
 */

// @lc code=start

int mySqrt(int x) {
  if (x == 0 || x == 1) return x;
  long long l = 1, r = x, mid, res;
  while (l <= r) {
    mid = (l + r) / 2;
    if (mid == x / mid)
      return mid;
    else if (mid > x / mid)
      r = mid - 1;
    else {
      l = mid + 1;
      res = mid;
    }
  }
  return res;
}

// @lc code=end
