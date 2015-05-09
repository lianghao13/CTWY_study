/*
  向数组输入值，并将数组中的全部元素进行倒序排列 
*/

#include <stdio.h>

int main(void) {
    int i;
    int vx[5];      /*包含5个元素的数组*/

    for (i = 0; i < 5; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    for (i = 0; i < 2; i++) {
        int temp = vx[i];
        vx[i] = vx[4 - i];
        vx[4 - i] = temp;
    }

    for (i = 0; i < 5; i++)
        printf("vx[%d] = %d\n", i, vx[i]);

    return (0);
}
