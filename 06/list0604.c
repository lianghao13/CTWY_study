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
    int c_scanf;
    
    printf("������һ��ʵ����");      scanf("%lf", &x);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("������һ��������");      scanf("%d", &n);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("%.2f��%d������%.2f��\n", x, n, power(x, n));

    return (0);
}
