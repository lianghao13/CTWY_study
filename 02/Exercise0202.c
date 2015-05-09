/*
    读取两个整数的值，显示出它们的和以及积
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("请输入两个整数。");
    printf("整数A:");  scanf("%d",&na);
    printf("整数B:");  scanf("%d",&nb);

    printf("它们的和是%d，积是%d。\n", na + nb, na * nb);

    return(0);
}
