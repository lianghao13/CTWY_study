/*
    ������ʾ����ķǸ����������ϸ�ֵ����棩
*/

#include <stdio.h>

int main(void){
    int num;

    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &num);
        if (num < 0)
            puts("\a�벻Ҫ���븺������");
    } while (num < 0);

    printf("������������ʾ�Ľ����");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    puts("��");

    return (0);
}
