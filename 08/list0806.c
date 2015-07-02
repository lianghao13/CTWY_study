/*
 *计算阶乘
*/

#include <stdio.h>

/*---返回阶乘的值---*/
int factorial(int n) {
    if (n > 0) {
        return(n * factorial(n - 1));
    }
    else {
        return(1);
    }
}

int main(void) {
    int num;
    int c_s;

    printf("请输入一个整数：");     scanf("%d", &num);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;

    printf("该数的阶乘为 %d。\n", factorial(num));

    return(0);
}
