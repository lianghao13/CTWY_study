/*
    显示出读取到的两个整数的积
*/

#include <stdio.h>

int main(void){
    int n1,n2;
    int pr;                                     //定义积变量

    puts("请输入两个整数。"); 
    printf("整数1：");  scanf("%d",&n1);
    printf("整数2：");  scanf("%d",&n2);        //读取输入的整数值

    pr = n1 * n2;

    printf("它们的积是%d。\n",pr);              //显示积
    
    return(0);
}
