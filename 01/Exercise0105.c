/*
    读取一个整数并显示其减去10后的整数值
*/

#include <stdio.h>

int main(void){
    int no;
    
    printf("请输入一个整数：");
    scanf("%d",&no);                //读取输入的整数值

    printf("它减去10的结果是%d。\n",no - 10);
    
    return(0);
}
