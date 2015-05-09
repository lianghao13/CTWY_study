/*
    读取两个整数的值，显示前者是后者的百分之几
*/

#include <stdio.h>

int main(void){
    int vx,vy;

    puts("请输入两个整数。");
    printf("整数vx:");  scanf("%d",&vx);
    printf("整数vy:");  scanf("%d",&vy);

    printf("vx是vy的百分之%d%%。\n",(vx * 100) / vy);

    return(0);
}
