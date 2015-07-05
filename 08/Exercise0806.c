/*
 *求出从n个不同整数中取出r个整数的组合数
*/

#include <stdio.h>

/*---求出由n个整数中取出r个整数的组合数值---*/
int combination(int n, int r) {
    if (r > 0 && r < n) {
        return(combination(n - 1, r - 1) + combination(n - 1, r));
    }
    else {
        if (r == 0 || r == 1)
            return(1);
        else {
            if (r == n) {
                return(n);
            }
            else {
                err_input();
            }
        }
    }
    return();
}

int main(void) {
    int n1, n2;
    int c_s;

    puts("请输入两个整数：");
    printf("整数1：");      scanf("%d", &n1);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;
    printf("整数2：");      scanf("%d", &n2);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;

    printf("这两个数的最大公约数是 %d。\n", gcd(n1, n2));

    return(0);
}
