/*
    ��ʾһ��ֱ�������·���ֱ��������
*/

#include <stdio.h>

int main(void){
    int i, j, ln;

    puts("�������м��㣺");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {         /*��������i��*/
        for (j = 1; j <= i; j++)        /*��i�о���ʾi��'*'*/
            putchar('*');
        putchar('\n');                  /*����*/
    }

    return (0);
}
