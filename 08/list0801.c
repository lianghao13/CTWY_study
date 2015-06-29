/*
 *整数的平方和浮点数的平方
*/

#include <stdio.h>

/*---int型整数的平方值---*/
int sqr_int(int x) {
    return(x * x);
}

/*---double型浮点数的平方值---*/
double sqr_double(double x) {
    return(x * x);
}

int main(void) {
    int     nx;
    double  dx;
    int     c_scanf;

    printf("请输入一个整数：");     scanf("%d",     &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("该数的平方是%d。\n", sqr_int(nx));

    printf("请输入一个实数：");     scanf("%lf",    &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("该数的平方是%f。\n", sqr_double(dx));

    return(0);
}
