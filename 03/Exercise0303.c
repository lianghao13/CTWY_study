/*
    ��ʾ���������ľ���ֵ
*/

#include <stdio.h>

int main(void) {
    int no;

    printf("������һ��������");     scanf("%d", &no);

    if (no >= 0)
        printf("�����ֵ��%d��\n", no);
    else
        printf("�����ֵ��%d��\n", -no);

    return (0);
}
