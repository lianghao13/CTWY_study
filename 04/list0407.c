/*
    ������������ʼ������0
*/

#include <stdio.h>

int main(void){
    int no;
    int c_scanf;

    printf("������һ��������");      scanf("%d", &no);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    while (no >= 0) {
        printf("%d ", no);
        no--;                   /*noֵ�ݼ�*/
    }
    putchar('\n');              /*������ɺ���*/

    return(0);
}
