/*
 *初始化字符串后，赋值为空字符串
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC";                 /*初始化字符串*/
    int     i;
    unsigned    count = sizeof(str);

    for (i = 0; i < count; ++i) {
        str[i] = '\0';
    }

    printf("字符串str的长度为%u，内容为%s。\n", count, str);     /*显示，printf函数认为读到NULL符为字符串结束的标识，后面的内容被忽略*/ 

    return(0);
}
