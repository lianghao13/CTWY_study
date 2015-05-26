/*
    返回三个整数中最小值的函数
*/

#include <stdio.h>

/*---返回较小整数的值---*/

int min3(int x, int y, int z) {
    int min = x;

    if (y < min)    min = y;
    if (z < min)    min = z;
    return (min);
}

int main(void) {
    int na, nb, nc;
    int c_scanf;
   
    puts("请输入三个整数。");
    printf("整数1：");      scanf("%d", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("整数2：");      scanf("%d", &nb);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("整数3：");      scanf("%d", &nc);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("较小的整数值是%d。\n", min3(na, nb, nc));

    return (0);
}
