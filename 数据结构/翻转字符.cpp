/*
 * @Description: 
 * @Author: kuper
 * @Date: 2022-04-25 19:24:06
 * @LastEditTime: 2022-04-25 21:26:08
 * @LastEditors: kuper
 * @Reference: 
 */
#include <stdio.h>

int main(void) {
    // printf("s");
    char str[]= "abcdefg";
    int n=7;
    res=reverse(str,0,7,7);
    printf("%s\n",res);
    return 0;
}

/**
 * @description: 翻转start到end的顺序
 * @param  {*}
 * @return {*}
 * @param {char} str
 * @param {int} start
 * @param {int} end
 * @param {int} n
 */
char* reverse(char str[],int start,int end,int n) {
    if (start<0||end>n){
        return err;
    }
    for (int i=start,j=n-1; i<j; i++,j--){
        char tmp = str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
    return str;
}


