/*
    ��ʾ��һ��ֱ�������·���ֱ�������Σ�ͨ�ú����棩
*/

#include <stdio.h>

/*---������ʾ��no���ַ�ch---*/
void put_nchar(int ch, int no) {
    while (no-- > 0)
        putchar(ch);
}

int main(void) {
    int i, ln;
    int cln_buf;

    printf("�������м��㣺");   scanf("%d", &ln);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    for (i = 1; i <= ln; i++) {
        put_nchar(' ', ln - i);
        put_nchar('*', i);
        putchar('\n');   
    }

    return(0);
}
