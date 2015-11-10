/*
 *保存字符串的数组（初始化，第二版）
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC\0DEF";      /*保存字符串的数组*/

    printf("字符串str为%s。\n", str);     /*显示，printf函数认为读到NULL符为字符串结束的标识，后面的内容被忽略*/ 

    return(0);
}
