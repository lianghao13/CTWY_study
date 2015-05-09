/*
    返回四个整数中较大值的函数
*/

#include <stdio.h>

/*---返回较大整数的值---*/
int maxof(int x, int y) {
    int max;
    if (x > y)
        max = x;
    else
        max = y;
    return (max);
}

/*---返回四个整数的最大值---*/
int max4(int w, int x, int y, int z) {
    return(maxof(maxof(w, x), maxof(y, z)));
}

int main(void) {
    int na, nb, nc, nd;
    
    puts("请输入四个整数。");
    printf("整数1：");      scanf("%d", &na);
    printf("整数2：");      scanf("%d", &nb);
    printf("整数3：");      scanf("%d", &nc);
    printf("整数4：");      scanf("%d", &nd);

    printf("四个整数中较大的整数值是%d。\n", max4(na, nb, nc, nd));

    return (0);
}
