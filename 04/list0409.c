/*
   ������ʾ��0�������������Ϊֹ
*/

#include <stdio.h>

int main(void){
    int i, no;

    printf("������һ����������");
    scanf("%d", &no);

    i = 0;
    while (i <= no) 
        printf("%d,", i++);
    
    putchar('\n');              /*����*/

    return (0);
}
