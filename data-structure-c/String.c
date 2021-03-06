/**
 * 字符串转数字
 **/
int numStrToNum(char *str) {
  int num = 0, negative = 0;
  if (*str == '-') {
    negative = 1;
    str++;
  }
  while (*str != '\0') {
    num = num * 10 + (*str - '0');
    str++;
  }
  return negative == 0 ? num : -num;
}