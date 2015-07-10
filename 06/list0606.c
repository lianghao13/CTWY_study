/*
    返回四个整数中较大值的函数
*/

#include <stdio.h>

/*---返回较大整数的值---*/
int maxof(int x, int y) {
    return((x > y) ? x : y);
}

/*---返回四个整数的最大值---*/
int max4(int w, int x, int y, int z) {
    return(maxof(maxof(w, x), maxof(y, z)));
}

int main(void) {
    int na, nb, nc, nd;
    int cln_buf;
    
    puts("请输入四个整数。");
    printf("整数1：");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("整数2：");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("整数3：");      scanf("%d", &nc);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("整数4：");      scanf("%d", &nd);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("四个整数中较大的整数值是%d。\n", max4(na, nb, nc, nd));

    return(0);
}
