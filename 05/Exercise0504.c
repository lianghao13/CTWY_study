/*
    把数组中的全部元素复制到另一个数组中
*/

#include <stdio.h>

int main(void) {
    int i;
    int j = 4;
    int va[5] = {15,20,30};      /*使用{15,20,30,0,0}进行初始化*/
    int vb[5];

    for (i = 0; i < 5; i++){
        vb[i] = va[j];
        j--;
    }
    
    puts(" va vb");
    puts("-------");
    for (i = 0; i < 5; i++)
        printf("%3d%3d\n", va[i], vb[i]);

    return (0);
}
