/*
    ������������ʼ������0���ڶ��棩
*/

#include <stdio.h>

int main(void){
    int no;

    printf("������һ��������");
    scanf("%d", &no);

    while (no >= 0)
        printf("%d ", no--);    /*noֵ����ʾ��ݼ�*/
    
    putchar('\n');              /*����*/

    return (0);
}
