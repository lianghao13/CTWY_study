/*
    返回三个整数中最大值的函数
*/

#include <stdio.h>

/*---返回较大整数的值---*/

int max3(int x, int y, int z) {
    int max = x;

    if (y > max)    max = y;
    if (z > max)    max = z;
    return (max);
}

int main(void) {
    int na, nb, nc;
    int cln_buf;
   
    puts("请输入三个整数。");
    printf("整数1：");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("整数2：");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("整数3：");      scanf("%d", &nc);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("较大的整数值是%d。\n", max3(na, nb, nc));

    return (0);
}
