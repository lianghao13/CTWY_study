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
    int     c_scanf;

    printf("������һ��������");     scanf("%d",     &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("������ƽ����%d��\n", sqr_int(nx));

    printf("������һ��ʵ����");     scanf("%lf",    &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("������ƽ����%f��\n", sqr_double(dx));

    return(0);
}
