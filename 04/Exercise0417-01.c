/*
    ��ʾһ��ֱ�������Ϸ���ֱ��������
*/

#include <stdio.h>

int main(void){
    int i, j, ln;

    printf("�������м��㣺");   scanf("%d", &ln);

    for (i = 0; i < ln; i++) {         /*��������i��*/
        for (j = 1; j <= (ln - i); j++)        /*��i�о���ʾln-i-1��'*'*/
            putchar('*');
        putchar('\n');                  /*����*/
    }

    return (0);
}
