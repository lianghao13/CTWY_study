/*
 *整数的平方和浮点数的平方（函数式宏）
*/

#include <stdio.h>

#define sqr(x) ((x) * (x))         /*计算x的平方 */

int main(void){
    int     nx;
    double  dx;
    int     c_scanf;

    printf("请输入一个整数：");      scanf("%d",    &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("该数的平方是%d。\n", sqr(nx));

    printf("请输入一个实数：");      scanf("%lf",   &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("该数的平方是%f。\n", sqr(dx));

    return(0);
}
