/*
 *求出从n个不同整数中取出r个整数的组合数
*/

#include <stdio.h>

/*---打印输入错误时的提示信息---*/
void err_input() {
    puts("输入信息有误，请检查！");
}

/*---求出由n个整数中取出r个整数的组合数值---*/
int combination(int n, int r) {
    if (r > 1 && r < n) {
        return(combination(n - 1, r - 1) + combination(n - 1, r));
    }
    else {
        if (r == 0 || r == n) {
            return(1);
        }
        else if (r == 1) {
            return(n);
        }
            else {
                err_input();
                return(0);
            }
    }
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

    if (n1 >= n2) {
        printf("从n1个不同整数中取出n2个整数的组合数为： %d。\n", combination(n1, n2));
    }
    else {
        err_input();
        puts("n1应该大于n2。");
    }

    return(0);
}
