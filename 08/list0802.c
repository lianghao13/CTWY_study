/*
 *������ƽ���͸�������ƽ��������ʽ�꣩
*/

#include <stdio.h>

#define sqr(x) ((x) * (x))         /*����x��ƽ�� */

int main(void){
    int     nx;
    double  dx;
    int     cln_buf;

    printf("������һ��������");      scanf("%d",    &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("������ƽ����%d��\n", sqr(nx));

    printf("������һ��ʵ����");      scanf("%lf",   &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("������ƽ����%f��\n", sqr(dx));

    return(0);
}
