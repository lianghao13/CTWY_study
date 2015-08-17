/*
 *使用函数，实现将字符串显示指定次数
*/

#include <stdio.h>

/*---按指定次数，显示字符串---*/
void put_stringn(const char str[], int no) {
    unsigned    j = 0, i;

    for (i = 0; i < no; ++i, j = 0) {
        printf("%u：", i + 1);
        while (str[j]) {
            printf("%c", str[j++]);
        }
        putchar('\n');
    }
}

int main(void) {
    char    str[100];
    unsigned    num;
    int     cln_buf;

    printf("请输入字符串:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("请输入需要打印的次数:");    scanf("%u", &num);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("函数作用如下：");
    put_stringn(str, num);

    return(0);
}
