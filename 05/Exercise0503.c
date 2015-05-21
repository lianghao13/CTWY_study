/*
    从头开始顺次为数组各元素进行初始化(5,4,3,2,1)并进行显示
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5] = {5,4,3,2,1};      /*初始化*/

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
