/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string longestPalindrome(string s) {
    int n = s.length();
    if (n < 2)
      return s;
    vector<vector<int>> dp(n, vector<int>(n));
    int ret, max = 0;
    //长度
    for (int l = 0; l < n; l++) {
      //位置
      for (int i = 0; i + l < n; i++) {
        int j = i + l;
        if (l == 0)
          dp[i][j] = 1;
        else if (l == 1)
          dp[i][j] = (s[i] == s[j]);
        else
          dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
        if (dp[i][j] && l + 1 > max)
          ret = i, max = l + 1;
      }
    }
    return s.substr(ret, max);
  }
};
// @lc code=end
