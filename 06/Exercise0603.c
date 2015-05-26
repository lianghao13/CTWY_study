/*
    计算输入整数的立方值
*/

#include <stdio.h>

/*---返回立方---*/
int cube(int x) {
    return (x * x * x);
}

int main(void) {
    int kx;
    int c_scanf;
    
    puts("请输入一个整数。");
    printf("整数kx：");      scanf("%d", &kx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("kx的立方是%d。\n", cube(kx));

    return (0);
}
