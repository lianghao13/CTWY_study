/*
    读取身高的整数值，显示出标准体重的实数值
*/

#include <stdio.h>

int main(void){
    int hight;
    double weight;

    printf("请输入您的身高："); scanf("%d", &hight);

    weight = ((double)hight - 100) * 0.9;

    printf("您的标准体重是%5.1f公斤。\n", weight);

    return(0);
}
