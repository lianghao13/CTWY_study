/*
    显示带横纵标题的九九乘法表
*/

#include <stdio.h>

int main(void){
    int i, j;

    //打印横标题及分割线
    printf("  |");
    for (i = 1; i <= 9; ++i) {
        printf("%3d", i);
    }
    putchar('\n');
    for (i = 0; i <= 9; ++i) {
        printf("---");
    }
    putchar('\n');

    for (i = 1; i <= 9; i++) {
        printf("%-2d|", i);
        for (j = 1; j <= 9; j++)
            printf("%3d", i * j);
        putchar('\n');
    }

    return (0);
}
