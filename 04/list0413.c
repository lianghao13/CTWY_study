/*
    ����һ��������������ʾ����������*��ʹ��for��䣩
*/

#include <stdio.h>

int main(void){
    int i,no;

    printf("������һ����������");
    scanf("%d", &no);

    for (i = 0; i <= no; i++)    
        putchar('*');
    putchar('\n');

    return (0);
}
