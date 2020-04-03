/*
 * @lc app=leetcode.cn id=166 lang=c
 *
 * [166] 分数到小数
 *
 * https://leetcode-cn.com/problems/fraction-to-recurring-decimal/description/
 *
 * algorithms
 * Medium (25.80%)
 * Likes:    121
 * Dislikes: 0
 * Total Accepted:    9.7K
 * Total Submissions: 37.7K
 * Testcase Example:  '1\n2'
 *
 * 给定两个整数，分别表示分数的分子 numerator 和分母 denominator，以字符串形式返回小数。
 * 
 * 如果小数部分为循环小数，则将循环的部分括在括号内。
 * 
 * 示例 1:
 * 
 * 输入: numerator = 1, denominator = 2
 * 输出: "0.5"
 * 
 * 
 * 示例 2:
 * 
 * 输入: numerator = 2, denominator = 1
 * 输出: "2"
 * 
 * 示例 3:
 * 
 * 输入: numerator = 2, denominator = 3
 * 输出: "0.(6)"
 * 
 * 
 */

// @lc code=start

char *fractionToDecimal(int numerator, int denominator) {
  char *result = (char *)malloc(sizeof(char) * 100);
  printf("%lf", (double)numerator / (double)denominator);
  *result = '\0';
  return result;
}

// @lc code=end
