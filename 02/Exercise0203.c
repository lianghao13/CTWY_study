/*
    显示读取的实数值
*/

#include <stdio.h>

int main(void){
    double num;

    printf("请输入一个实数："); scanf("%lf", &num);

    printf("你输入的是%f。\n", num);

    return(0);    
}
