/*
    ��*���һ�������Σ�����Ϊ��������Ϊ����>��
*/

#include <stdio.h>

int main(void){
    int i, j;
    int tmp,colum, row;

    puts("�����������һ�������Σ�����Ϊ��������Ϊ����>����");
    printf("һ�ߣ�");     scanf("%d", &colum);
    printf("��һ�ߣ�");     scanf("%d", &row);

    if (colum < row) {
        tmp = colum;
        colum = row;
        row = tmp;
    }

    for (i = 1; i <= row; i++) {                 /*�������ж�����*/
        for (j = 1; j <= colum; j++)                /*��ʾһ���ֶ�����'*'*/
            putchar('*');
        putchar('\n');                              /*����*/
    }

    return (0);
}
