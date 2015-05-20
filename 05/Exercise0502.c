/*
    依次把5,4,3,2,1赋值给数组每个元素并显示（使用for语句）
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5];      /*包含5个元素的数组*/
    int j = 5;

    for (i = 0; i < 5; i++){
        vc[i] = j;
        j--;
    }

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
