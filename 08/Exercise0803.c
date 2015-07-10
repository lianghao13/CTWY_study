/*
 *使用函数式宏，实现"type"型的两值互换功能
*/

#include <stdio.h>

#define swap(type, a, b) {type tmp;tmp = (a), (a) = (b), (b) = tmp;}

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     cln_buf;

    puts("请输入两个整数值。");
    printf("nx = ");    scanf("%d", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ; 
    printf("ny = ");    scanf("%d", &ny);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    puts("请输入两个实数值。");
    printf("dx = ");    scanf("%lf", &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ; 
    printf("dy = ");    scanf("%lf", &dy);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    swap(int, nx, ny);
    swap(double, dx, dy);
    
    puts("\n利用函数式宏实现两值互换后的结果：");
    printf("nx = %d;\tny = %d\n", nx, ny);
    printf("dx = %f;\tdy = %f\n", dx, dy);

    return(0);
}
