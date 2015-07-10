/*
 *采用函数式宏返回x,y两数之差
*/

#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     cln_buf;

    puts("请输入两个整数：");
    printf("nx = ");    scanf("%d", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("ny = ");    scanf("%d", &ny);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    puts("请输入两个实数：");
    printf("dx = ");    scanf("%lf", &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("dy = ");    scanf("%lf", &dy);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("以上两个整数的差值为：%d。\n",      diff(nx, ny));
    printf("以上两个实数的差值为：%-.3f。\n",     diff(dx, dy));

    return(0);
}
