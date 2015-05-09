/*
    读取两个整数的值，并用浮点数显示出它们的平均值
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("请输入两个整数。");
    printf("整数A:");  scanf("%d",&na);
    printf("整数B:");  scanf("%d",&nb);

    printf("它们的平均值是%f。\n", (na + nb) / 2.0);

    return(0);
}
