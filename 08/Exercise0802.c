/*
 *使用函数式宏计算a,b,c,d中的最大值
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    int c_scanf;

    puts("请输入4个整数。");
    printf("a = ");     scanf("%d", &a);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("b = ");     scanf("%d", &b);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("c = ");     scanf("%d", &c);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("d = ");     scanf("%d", &d);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    
    puts("两种求四个值中最大值的方法。");
    printf("方法1：\tmax(max(a,b),max(c,d))=%d\n", max(max(a,b),max(c,d)));
    printf("方法2：\tmax(max(max(a,b),c),d)=%d\n", max(max(max(a,b),c),d));

    return(0);
}
