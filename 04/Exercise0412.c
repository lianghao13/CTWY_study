/*
    ����������,ѭ����ʾ1234567890,��ʾλ�������������ֵ��ͬ
*/

#include <stdio.h>

int main(void){
    int num, i;
    
    do {
        printf("������һ��������:");    scanf("%d", &num);
        if (num <= 0)
            puts("\a��������������");
    } while (num <= 0);

    return (0);
}
