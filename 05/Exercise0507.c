/*
    计算2行3列矩阵与3行2列矩阵的积
*/

#include <stdio.h>

int main(void) {
    int i,j;
    int x[2][3] = { {1,2,3}, {4,5,6} };
    int y[3][2] = { {1,5}, {5,3}, {8,1} };
    int z[2][3] = { 0 };

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            z[i][j] = x[i][j] * y[j][i];

    for (i = 0; i < 2; i++) {
        for (j = 0;j < 3; j++)
            printf("%3d", z[i][j]);
        putchar('\n');
    }
    
    return (0);
}
