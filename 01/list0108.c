/*
    为两个变量赋整数值并显示
*/

#include <stdio.h>

int main(void){
    int vx,vy;                      //定义int型的两个变量vx和vy
    
    vx = 57;                        //把57赋值给vx
    vy = vx + 10;                   //把vx+10赋值给vy

    printf("vx的值是%d。\n",vx);    //显示vx的值
    printf("vy的值是%d。\n",vy);    //显示vy的值

    return(0);
}
