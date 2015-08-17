/*
 *函数实现字符串的逆向输出
*/

#include <stdio.h>

/*---显示字符串（换行）---*/
void put_rstring(const char str[]) {
    unsigned    i = 0, len = 0;
    char        re_str[100] ={ '\0' };         /*定义一个足够大的数组*/

    while (str[i++]) {                         /*获取字符串的有效长度*/
        len++;
    }

    for (i = 0; i < len; ++i) {                /*求逆向的字符串*/
        re_str[i] = str[(len - 1) - i];
    }
    
    i = 0;                                     /*打印逆向字符串*/
    while (re_str[i]) {
        putchar(re_str[i++]);
    }
    putchar('\n');
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("请输入字符串:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("该字符串逆向输出为：");
    put_rstring(str);

    return(0);
}
