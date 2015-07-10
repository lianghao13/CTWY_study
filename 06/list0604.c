/*
    计算幂
*/

#include <stdio.h>

/*---返回dx的no次幂---*/
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
    
    printf("请输入一个实数：");      scanf("%lf", &x);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("请输入一个整数：");      scanf("%d", &n);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("%.2f的%d次幂是%.2f。\n", x, n, power(x, n));

    return (0);
}
