/*
    显示出一个直角在左下方的直角三角形（函数版）
*/

#include <stdio.h>

/*---连续显示出no个'*'---*/
void put_stars(int no) {
    while (no-- > 0)
        putchar('*');
}

int main(void) {
    int i, ln;
    int cln_buf;

    printf("三角形有几层：");   scanf("%d", &ln);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    for (i = 1; i <= ln; i++) {
        put_stars(i);
        putchar('\n');   
    }

    return (0);
}
