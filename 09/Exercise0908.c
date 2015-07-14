/*
 *函数实现字符串的逆向保存
*/

#include <stdio.h>

/*---逆向保存字符串---*/
void rev_stringn(char str[]) {
    unsigned    i = 0, len = 0;
    char        temp;

    while (str[i++]) {                          /*获取字符串的有效长度*/
        len++;
    }

    for (i = 0; i < (len / 2); ++i) {           /*逆向保存字符串*/
        temp = str[i];
        str[i] = str[(len - 1) - i];
        str[(len - 1) - i] = temp;
    }
    
    i = 0;                                     /*打印逆向字符串*/
    while (str[i]) {
        putchar(str[i++]);
    }
    putchar('\n');
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("请输入字符串:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("该字符串逆向保存后输出为：");
    rev_stringn(str);

    return(0);
}
