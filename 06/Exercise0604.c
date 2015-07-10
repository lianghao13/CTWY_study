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
    int cln_buf;
    
    puts("请输入一个整数。");
    printf("整数kx：");      scanf("%d", &kx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("kx的四次幂是%d。\n", pow4(kx));

    return(0);
}
