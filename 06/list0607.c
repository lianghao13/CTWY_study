/*
    ��ʾ��һ��ֱ�������·���ֱ�������Σ������棩
*/

#include <stdio.h>

/*---������ʾ��no��'*'---*/
void put_stars(int no) {
    while (no-- > 0)
        putchar('*');
}

int main(void) {
    int i, ln;
    int cln_buf;

    printf("�������м��㣺");   scanf("%d", &ln);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    for (i = 1; i <= ln; i++) {
        put_stars(i);
        putchar('\n');   
    }

    return (0);
}
