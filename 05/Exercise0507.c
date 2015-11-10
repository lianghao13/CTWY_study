/*
    计算2行3列矩阵与3行2列矩阵的积
*/

#include <stdio.h>

int main(void) {
    int i, j, k;
    int tmp = 0;
    int x[2][3] = { {1,2,3}, {4,5,6} };
    int y[3][2] = { {1,5}, {5,3}, {8,1} };
    int z[2][2] = { 0 };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; ++k) {
                tmp = x[i][k] * y[k][j];
                z[i][j] += tmp;
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0;j < 2; j++)
            printf("%3d", z[i][j]);
        putchar('\n');
    }
    
    return (0);
}
