/*
    ������ʾ����ķǸ��������ڶ��棩
*/

#include <stdio.h>

int main(void){
    int num;

    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &num);
        if (num < 0)
            puts("\a�벻Ҫ���븺������");
    } while (num < 0);                  /*��num���ڵ���0ʱ��ִ����һ��*/

    printf("%d������ʾ�Ľ����", num);
    do {
        printf("%d", num % 10);         /*ÿ����ʾnum�����һλ*/
        num = num / 10;                 /*��num��ʮ��������һλ*/
    } while (num > 0);
    puts("��");

    return (0);
}
