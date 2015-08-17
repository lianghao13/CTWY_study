/*
   为数组中全部元素分配静态存储期，并确认都被初始化为0
*/

#include <stdio.h>
#define NUMBER 5

int main(void) {
    static int arry[NUMBER];            /*静态存储期（被初始化为0）*/
    int ax;                             /*自动存储期（被初始化为不确定的值）*/
    int i;

    printf("ax = %d\n", ax);
    puts("---------");
    for (i = 0; i < NUMBER; ++i) {
        printf("arry[%d] = %d\n", i, arry[i]);
    }

    return (0);
}
