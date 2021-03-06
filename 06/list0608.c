/*
    显示出一个直角在右下方的直角三角形（通用函数版）
*/

#include <stdio.h>

/*---连续显示出no个字符ch---*/
void put_nchar(int ch, int no) {
    while (no-- > 0)
        putchar(ch);
}

int main(void) {
    int i, ln;
    int cln_buf;

    printf("三角形有几层：");   scanf("%d", &ln);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    for (i = 1; i <= ln; i++) {
        put_nchar(' ', ln - i);
        put_nchar('*', i);
        putchar('\n');   
    }

    return(0);
}
