/*
    ��ʾ���������������3������
*/

#include<stdio.h>

int main(void){
    int num;

    printf("������һ������:");
    scanf("%d", &num);

    if (num % 3 == 0)
        puts("�����ܹ���3������");
    else if (num % 3 == 1)
        puts("��������3��������1��");
    else 
        puts("��������3��������2��");

    return(0);
}
