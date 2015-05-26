/*
    计算幂（第二版）
*/

#include <stdio.h>

/*---返回dx的no次幂（第二版）---*/
double power(double dx, int no) {
    double tmp = 1.0;

    while (no-- > 0)
        tmp *= dx;
    return (tmp);
}

int main(void) {
    int n;
    double x;
    int c_scanf;
    
    printf("请输入一个实数：");      scanf("%lf", &x);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("请输入一个整数：");      scanf("%d", &n);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("%.2f的%d次幂是%.2f。\n", x, n, power(x, n));

    return (0);
}
