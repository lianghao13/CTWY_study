/*
    ��������ķǸ�������λ�������ϸ�ֵ����ͺ��õ����棩
*/

#include <stdio.h>

int main(void){
    int num;
    int dig = 0;            /*λ������*/

    /*��num���ڵ���0ʱ������ִ��*/
    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &num);
        if (num < 0)
            puts("\a�벻Ҫ���븺������");
    } while (num < 0);

    do {
        num /= 10;      /*����һλ����λ��*/
        dig++;
    } while (num > 0);
    printf("��������λ����%d��\n", dig);

    return (0);
}
