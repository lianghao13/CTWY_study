/*
 *计算阶乘（不使用递归方法）
*/

#include <stdio.h>

/*---返回阶乘的值---*/
int fact(int n) {
    int i = 1;
    int fact = 1;
    if (n > 0) {
        while (i <= n) {
            fact *= i;
            i++;
        }
        return(fact);
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

    printf("该数的阶乘为 %d。\n", fact(num));

    return(0);
}
