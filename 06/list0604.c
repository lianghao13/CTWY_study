/*
    ������
*/

#include <stdio.h>

/*---����dx��no����---*/
int power(double dx, int no) {
    int i;
    double tmp = 1.0;

    for (i = 1; i <= no; i++)
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
