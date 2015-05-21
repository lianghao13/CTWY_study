/*
  向数组输入值，并将数组中的全部元素进行倒序排列，数组元素数量为偶数
*/

#include <stdio.h>
#define NUMBER   8            //数组数量

int main(void) {
    int i;
    int vx[NUMBER];      /*包含NUMBER个元素的数组*/

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    for (i = 0; i < (NUMBER / 2); i++) {
        int temp = vx[i];
        vx[i] = vx[(NUMBER - 1) - i];
        vx[(NUMBER - 1) - i] = temp;
    }

    for (i = 0; i < NUMBER; i++)
        printf("vx[%d] = %d\n", i, vx[i]);

    return (0);
}
