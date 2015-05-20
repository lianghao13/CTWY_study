/*
    依次把0,1,2,3,4赋值给数组每个元素并显示（使用for语句）
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5];      /*包含5个元素的数组*/

    for (i = 0; i < 5; i++)
        vc[i] = i;

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
