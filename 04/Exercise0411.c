/*
    ����һ��������������ʾ����������*�����������0���µ�����������ʾ�κ�����
*/

#include <stdio.h>

int main(void){
    int no;

    printf("������һ����������");    scanf("%d", &no);

    while (no-- > 0)
        puts("*");
    /*putchar('\n');*/

    return (0);
}
