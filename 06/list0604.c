/*
    ������
*/

#include <stdio.h>

/*---����dx��no����---*/
double power(double dx, int no) {
    int i;
    double tmp = 1.0;

    for (i = 1; i <= no; i++)
        tmp *= dx;    
    return (tmp);
}

int main(void) {
    int n;
    double x;
    int cln_buf;
    
    printf("������һ��ʵ����");      scanf("%lf", &x);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("������һ��������");      scanf("%d", &n);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("%.2f��%d������%.2f��\n", x, n, power(x, n));

    return (0);
}
