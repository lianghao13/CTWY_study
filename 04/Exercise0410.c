/*
    ��ʾС����������������2�ĳ˷�
*/

#include <stdio.h>

int main(void){
    int i = 2;
    int num;

    do {
        printf("������һ����������");    scanf("%d", &num);
        if (num < 0)
            puts("\a�벻Ҫ�������������");
    } while(num <= 0);

    while (i <= num) {
        printf("%4d,", i);
        i *= 2;    
    }
    putchar('\n');          //���������ɺ���

    return (0);
}
