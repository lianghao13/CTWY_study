/*
    ������������ʼ������0�������븺��ʱ�����У�
*/

#include <stdio.h>

int main(void){
    int no;

    printf("������һ��������");
    scanf("%d", &no);

    if (no >= 0){
        while (no >= 0){
            printf("%d ", no);
            no--;                   /*noֵ�ݼ�*/
        }   
        putchar('\n');              /*����*/
    }
    else{
        while (no <= 0){
            printf("%d", no);
            no++;
        }
    }
    return (0);
}
