/*
 *������ƽ���͸�������ƽ��
*/

#include <stdio.h>

/*---int��������ƽ��ֵ---*/
int sqr_int(int x) {
    return(x * x);
}

/*---double�͸�������ƽ��ֵ---*/
double sqr_double(double x) {
    return(x * x);
}

int main(void) {
    int     nx;
    double  dx;
    int     cln_buf;

    printf("������һ��������");     scanf("%d",     &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("������ƽ����%d��\n", sqr_int(nx));

    printf("������һ��ʵ����");     scanf("%lf",    &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("������ƽ����%f��\n", sqr_double(dx));

    return(0);
}
