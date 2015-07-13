/*
 *初始化字符串后，赋值为空字符串
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC";                 /*初始化字符串*/
    int     i;

    for (i = 0; i < (int)sizeof(str); ++i) {
        str[i] = '\0';
    }

    printf("字符串str的长度为%d，内容为%s。\n", (int)sizeof(str), str);     /*显示，printf函数认为读到NULL符为字符串结束的标识，后面的内容被忽略*/ 

    return(0);
}
