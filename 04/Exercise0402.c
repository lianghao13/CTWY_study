/*
    ��������ķǸ�������λ�����ڶ��棩
*/

#include <stdio.h>

int main(void){
    int num;
    int dig = 0;            /*λ������*/

    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &num);
        if (num < 0)
            puts("\a�벻Ҫ���븺������");
    } while (num < 0);                      /*��num���ڵ���0ʱ������ִ��*/

    printf("%d", num);
    do {
        num = num / 10;                     /*����һλ����λ��*/
        dig = dig + 1;
    } while (num > 0);
    printf("��λ����%d��\n", dig);

    return (0);
}
