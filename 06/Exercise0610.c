/*
    计算2行3列矩阵之积
*/

#include <stdio.h>

/*---把2行3列的矩阵ma和mb的积保存在mc中---*/
void mul(const int arry1[2][3], const int arry2[3][2], int arry3[2][2]) {
    int i, j, k;
    int tmp = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; ++k) {
                tmp = arry1[i][k] * arry2[k][j];
                arry3[i][j] += tmp;
            }
        }
    }
}

int main(void) {
    int i, j; 
    int ma[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int mb[3][2] = { {6, 3}, {4, 5}, {1, 2} };
    int mc[2][2] = { {0, 0}, {0, 0} };
    
    mul(ma, mb, mc);                /*把ma和mb的积保存到mc中*/

    puts("矩阵ma为：");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d", ma[i][j]);
        putchar('\n');
    }
    puts("矩阵mb为：");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%3d", mb[i][j]);
        putchar('\n');
    }
    puts("两个矩阵之积mc为：");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%3d", mc[i][j]);
        putchar('\n');
    }

    return (0);
}
