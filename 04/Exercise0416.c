/*
    用*描绘一个长方形（横向为长，纵向为宽，长>宽）
*/

#include <stdio.h>

int main(void){
    int i, j;
    int tmp,colum, row;

    puts("让我们来描绘一个长方形（横向为长，纵向为宽，长>宽）。");
    printf("一边：");     scanf("%d", &colum);
    printf("另一边：");     scanf("%d", &row);

    if (colum < row) {
        tmp = colum;
        colum = row;
        row = tmp;
    }

    for (i = 1; i <= row; i++) {                 /*长方形有多少行*/
        for (j = 1; j <= colum; j++)                /*显示一行又多少列'*'*/
            putchar('*');
        putchar('\n');                              /*换行*/
    }

    return (0);
}
