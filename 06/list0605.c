/*
    �����ݣ��ڶ��棩
*/

#include <stdio.h>

/*---����dx��no���ݣ��ڶ��棩---*/
int power(double dx, int no) {
    double tmp = 1.0;

    while (no-- > 0)
        tmp *= dx;
    return (tmp);
}

int main(void) {
    int n;
    double x;
    
    printf("������һ��ʵ����");      scanf("%lf", &x);
    printf("������һ��������");      scanf("%d", &n);

    printf("%.2f��%d������%.2f��\n", x, n, power(x, n));

    return (0);
}
