/*
 *������ƽ���͸�������ƽ��������ʽ�꣩
*/

#include <stdio.h>

#define sqr(x) ((x) * (x))         /*����x��ƽ�� */

int main(void){
    int     nx;
    double  dx;
    int     c_scanf;

    printf("������һ��������");      scanf("%d",    &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("������ƽ����%d��\n", sqr(nx));

    printf("������һ��ʵ����");      scanf("%lf",   &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("������ƽ����%f��\n", sqr(dx));

    return(0);
}
