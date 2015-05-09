/*
    读取两个整数的值，显示前者是后者的百分之几
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("请输入两个整数。");
    printf("整数A:");  scanf("%d",&na);
    printf("整数B:");  scanf("%d",&nb);

    printf("A是B的%f%%。\n", (double)(na * 100) / nb);

    return(0);
}
