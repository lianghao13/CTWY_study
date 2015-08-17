/*
 *使用函数式宏计算a,b,c,d中的最大值
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    int cln_buf;

    puts("请输入4个整数。");
    printf("a = ");     scanf("%d", &a);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("b = ");     scanf("%d", &b);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("c = ");     scanf("%d", &c);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("d = ");     scanf("%d", &d);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    
    puts("两种求四个值中最大值的方法。");
    printf("方法1：\tmax(max(a,b),max(c,d))=%d\n", max(max(a,b),max(c,d)));
    printf("方法2：\tmax(max(max(a,b),c),d)=%d\n", max(max(max(a,b),c),d));

    return(0);
}
