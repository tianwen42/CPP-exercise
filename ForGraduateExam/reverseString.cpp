/*
 * @Description:
 * @Author: kuper
 * @Date: 2022-04-25 19:24:06
 * @LastEditTime: 2022-05-11 14:02:17
 * @LastEditors: kuper
 * @Reference:
 */
#include <stdio.h>
#include <cstdlib>
#include <cstring>

/**
 * @description: 翻转start到end的顺序
 * @param  {*}
 * @return {*}
 * @param {char} str
 * @param {int} start
 * @param {int} end
 * @param {int} n
 */
char* reverse(char str[], int start, int end, int n) {
    if (start < 0 || end > n) {
        char* err;
        err = (char*)malloc(20);
        strcpy(err, "越界了");
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
    char str[] = "abcdefg";
    int n = 7;
    // char *res = reverse(str, 0, 7, 7);
    // reverse(str, 0, 7, 7);
    printf("%s\n", reverse(str, 0, 7, n));
    return 0;
}