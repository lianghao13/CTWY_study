/*
    ������������ʼ������0
*/

#include <stdio.h>

int main(void){
    int no;
    int cln_buf;

    printf("������һ��������");      scanf("%d", &no);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    while (no >= 0) {
        printf("%d ", no);
        no--;                   /*noֵ�ݼ�*/
    }
    putchar('\n');              /*������ɺ���*/

    return(0);
}
