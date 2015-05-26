/*
    计算输入整数的四次幂
*/

#include <stdio.h>

/*---返回平方---*/
int sqr(int x) {
    return(x * x);
}

/*---返回四次幂---*/
int pow4(int num){
    return(sqr(num) * sqr(num));
}

int main(void) {
    int kx;
    int c_scanf;
    
    puts("请输入一个整数。");
    printf("整数kx：");      scanf("%d", &kx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("kx的四次幂是%d。\n", pow4(kx));

    return(0);
}
