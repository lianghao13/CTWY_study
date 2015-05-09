/*
    ����2��3�о���֮��
*/

#include <stdio.h>

/*---��2��3�еľ���ma��mb�ĺͱ�����mc��---*/
void mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3]) {
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            mc[i][j] = ma[i][j] + mb[i][j];
}

int main(void) {
    int i, j; 
    int ma[i][j] = { {1, 2, 3}, {4, 5, 6} };
    int mb[i][j] = { {6, 3, 4}, {5, 1, 2} };
    int mc[i][j] = { 0 };
    
    mat_add(ma, mb, mc);                /*��ma��mb�ĺͱ��浽mc��*/

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d", mc[i][j]);
        putchar('\n');
    }

    return (0);
}
