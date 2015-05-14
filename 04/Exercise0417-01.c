/*
    显示一个直角在左上方的直角三角形
*/

#include <stdio.h>

int main(void){
    int i, j, ln;

    printf("三角形有几层：");   scanf("%d", &ln);

    for (i = 0; i < ln; i++) {         /*三角形有i行*/
        for (j = 1; j <= (ln - i); j++)        /*第i行就显示ln-i-1个'*'*/
            putchar('*');
        putchar('\n');                  /*换行*/
    }

    return (0);
}
