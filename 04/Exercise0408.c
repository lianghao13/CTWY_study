/*
   ������ʾ��0�������������Ϊֹ
*/

#include <stdio.h>

int main(void){
    int i = 1;
    int no;

    printf("������һ����������");    scanf("%d", &no);

    if (no > 0) {
        while (i <= no) 
            printf("%d,", i++);
        putchar('\n');          //���������ɺ���
    }

    return (0);
}
