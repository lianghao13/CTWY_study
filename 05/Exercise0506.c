/*
*   对赋值表达式a=b=1.5的讨论
*/

#include <stdio.h>

int main(void) {
    int b;
    double a;

    a = b = 1.5;

    printf("a的值是：%5.2f\n", a);
    printf("b的值是：%5d\n", b);

    return(0);
}
