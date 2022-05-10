/*
 * @Description:
 * @Author: kuper
 * @Date: 2022-04-25 19:24:06
 * @LastEditTime: 2022-05-09 18:08:35
 * @LastEditors: kuper
 * @Reference:
 */
#include <stdio.h>

/**
 * @description: 翻转start到end的顺序
 * @param  {*}
 * @return {*}
 * @param {char} str
 * @param {int} start
 * @param {int} end
 * @param {int} n
 */
char *reverse(char str[], int start, int end, int n) {
  if (start < 0 || end > n) {
    return err;
  }
  for (int i = start, j = n - 1; i < j; i++, j--) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
  return str;
}
int main(void) {
  // printf("s");
  char str[] = "abcdefg";
  int n = 7;
  // char res[] = reverse(str, 0, 7, 7);
  printf("%s\n", reverse(str, 0, 7, 7));
  return 0;
}