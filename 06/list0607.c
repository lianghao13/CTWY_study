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
    int c_scanf;

    printf("�������м��㣺");   scanf("%d", &ln);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    for (i = 1; i <= ln; i++) {
        put_stars(i);
        putchar('\n');   
    }

    return (0);
}
