/*
    读取一个整数并显示其10倍整数值
*/

#include <stdio.h>

int main(void){
    int no;
    
    printf("请输入一个整数：");
    scanf("%d",&no);                //读取输入的整数值

    printf("它的10倍数是%d。\n",10 * no);
    
    return(0);
}
