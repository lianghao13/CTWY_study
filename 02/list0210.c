/*
    读取两个整数的值，并用实数显示出它们的平均值（类型转换）
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("请输入两个整数。");
    printf("整数A:");  scanf("%d",&na);
    printf("整数B:");  scanf("%d",&nb);

    printf("它们的平均值是%.4f。\n", (double)(na + nb) / 2);

    return(0);
}
