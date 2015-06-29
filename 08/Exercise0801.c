/*
 *采用函数式宏返回x,y两数之差
*/

#include <stdio.h>

#define diff(x, y) ((x > y) ? (x - y) : (y - x))

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     c_scanf;

    puts("请输入两个整数：");
    printf("nx = ");    scanf("%d", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("ny = ");    scanf("%d", &ny);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    puts("请输入两个实数：");
    printf("dx = ");    scanf("%lf", &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("dy = ");    scanf("%lf", &dy);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("以上两个整数的差值为：%d。\n",      diff(nx, ny));
    printf("以上两个实数的差值为：%-.3f。\n",     diff(dx, dy));

    return(0);
}
