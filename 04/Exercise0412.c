/*
    ����������,ѭ����ʾ1234567890,��ʾλ�������������ֵ��ͬ
*/

#include <stdio.h>

int main(void){
    int num, i;
    int j = 0;
    
    do {
        printf("������һ��������:");    scanf("%d", &num);
        if (num <= 0)
            puts("\a��������������");
    } while (num <= 0);

    for (i = 0; i < num; ++i) {
        if (j < 9) {
            printf("%d", ++j);
        }
        else {
            j = 0;
            printf("%d", j);
        }
    }

    putchar('\n');

    return (0);
}
