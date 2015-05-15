/*
    显示输入整数层数的*号金字塔
*/

#include <stdio.h>

int main(void){
    int i, j, ln;
    int ln_tmp, br_tmp;

    puts("让我们用*来描绘一个金字塔。");
    printf("金字塔有几层：");   scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {             
        ln_tmp = 2 * i - 1;                 //求取每行应显示的*号数
        br_tmp = (2 * ln - ln_tmp) / 2;     //求取每行应显示' '的数量，取半为第一个*前' '的个数
        for (j = 0; j < br_tmp; j++)        //先显示与第i行相应个的空格
            putchar(' ');
        for (j = 0; j < ln_tmp; j++)        //再显示与当前行相应个的*号
            putchar('*');
        putchar('\n');                       /*换行*/
    }

    return (0);
}
